#include <stdio.h>
#include <winsock2.h>
#include <mysql.h>
#include <string.h>
#include <windows.h>

#define texto "%[^\n]s"

void menu(MYSQL conexao);
void update(MYSQL conexao);
int busca_id(MYSQL conexao, int id, char query[1024]);
int checa_estoque(MYSQL conexao, int id, char query[1024]);

void main()
{
    MYSQL conexao;
    mysql_init(&conexao);
    if(mysql_real_connect(&conexao, "127.0.0.1", "root", "", "carcessionaria", 0, NULL, 0))
    menu(conexao);
    else
    {
        printf("Falha na conexao com o Banco de Dados\n");
        printf("Erro %d : %s\n", mysql_errno(&conexao), mysql_error(&conexao));
    }
}

void menu(MYSQL conexao)
{
    int escolha,id;
    printf("  ------------------------------ CARCESSIONARIA ------------------------------\n");
    printf("\n  [1] - Listar Veiculos");
    printf("\n  [2] - Cadastrar um novo Veiculo");
    printf("\n  [3] - Alterar um Veiculo");
    printf("\n  [4] - Vender um Veiculo");
    printf("\n  [5] - Sair");
    printf("\n\n  Informe uma opcao: ");
    scanf("%i",&escolha);
    switch(escolha)
    {
        case 1:  system("cls");          consulta(conexao);  break;
        case 2:  system("cls");          insert(conexao);    break;
        case 3:  system("cls");          update(conexao);    break;
        case 4:  system("cls");
                 consulta(conexao);
                 printf("\nInforme o ID do Veiculo que deseja Vender: ");
                 scanf("%i",&id);
                 realizar_venda(conexao,id);
        case 5:  mysql_close(&conexao);  exit(1);
        default: printf("\n   Opcao escolhida invalida! Tente novamente!\n\n");
                 menu(conexao);
    }
}

void consulta(MYSQL conexao)
{
    MYSQL_ROW rs_linhas;
    MYSQL_RES *consulta; //Result Set
    MYSQL_FIELD *rs_colunas;
    int i,j;

    if(mysql_query(&conexao,"SELECT Veiculos.id_veiculo as ID,Veiculos.cor as Cor,Veiculos.marca as Marca,Estoque.quantidade_estoque as Quantidade,Veiculos.valor as Valor,Veiculos.ano as Ano FROM Veiculos INNER JOIN Estoque on Veiculos.id_veiculo=Estoque.id_veiculo"))
    printf("Erro: %s\n",mysql_error(&conexao));
    else
    {
        consulta = mysql_store_result(&conexao);
        if (consulta)
        {
            rs_colunas = mysql_fetch_fields(consulta);
            for(j=0;j<mysql_num_fields(consulta);j++)
            {
                printf("%s",(rs_colunas[j]).name);
                if(mysql_num_fields(consulta)>1)
                printf("\t - ");
            }
            printf("\n\n");

            while ((rs_linhas=mysql_fetch_row(consulta))!=NULL)
            {
                for (i=0;i<mysql_num_fields(consulta);i++)
                printf("     %s\t",rs_linhas[i]);
                printf("\n");
            }
        }
        mysql_free_result(consulta);
        printf("\n");
        printf("\nDeseja voltar ao Menu Inicial? [1] para Sim, [0] para Nao: ");
        int volta_menu;
        scanf("%i",&volta_menu);
        if(volta_menu==1)
        {
           system("cls");
           menu(conexao);
        }
        else
        {
            printf("");
        }
    }
}

void insert(MYSQL conexao)
{
    char cor_carro[25], marca[20], query [1024];
    float valor;
    int i,estoque;

    printf("\nInforme a cor do veiculo: ");
    fflush(stdin);
    scanf(texto,cor_carro);
    while(strcmp(cor_carro,"")==0)
    {
        printf("\nCor invalida! Tente novamente!\n");
        printf("\nInforme a cor do veiculo: ");
        fflush(stdin);
        scanf(texto,cor_carro);
    }

    int ano=checa_ano();

    printf("\nInforme a marca do veiculo: ");
    fflush(stdin);
    scanf(texto,marca);
    while(strcmp(marca,"")==0)
    {
        printf("\nMarca invalida! Tente novamente!\n");
        printf("\nInforme a marca do veiculo: ");
        fflush(stdin);
        scanf(texto,marca);
    }

    printf("\nInforme o valor do veiculo: ");
    fflush(stdin);
    scanf("%f",&valor);
    while(valor<2500)
    {
        printf("\nValor suspeito! Tente novamente!\n");
        printf("\nInforme o valor do veiculo: ");
        fflush(stdin);
        scanf("%f",&valor);
    }

    printf("\nDefina a quantidade em estoque do veiculo: ");
    fflush(stdin);
    scanf("%i",&estoque);
    while(estoque<1)
    {
        printf("\nQuantidade invalida! Tente novamente!\n");
        printf("\nDefina a quantidade em estoque do veiculo: ");
        fflush(stdin);
        scanf("%i",&estoque);
    }

    sprintf(query,"INSERT INTO Veiculos (cor,ano,marca,valor) VALUES ('%s','%d','%s',%f)",cor_carro,ano,marca,valor);
    if(mysql_query(&conexao,query))
	printf("\nNão foi possível executar a inserção\nERRO: %s\n", mysql_error(&conexao));
	else
    {
        strcpy(query,"");
        int id=mysql_insert_id(&conexao);
        sprintf(query,"INSERT INTO Estoque (id_veiculo,quantidade_estoque) VALUES ('%i','%i')",id,estoque);

        if(mysql_query(&conexao,query))
        printf("\nNão foi possível executar a inserção\nERRO: %s\n", mysql_error(&conexao));
        else
        {
            system("cls");
            printf("\n   O carro foi cadastrado com sucesso!\n\n");
        }
    }
    menu(conexao);
}

void update(MYSQL conexao)
{
    int escolha,id;
    printf("\n  [1] - Alterar Cor de um Veiculo");
    printf("\n  [2] - Alterar Marca de um Veiculo");
    printf("\n  [3] - Alterar Valor de um Veiculo");
    printf("\n  [4] - Alterar Ano de um Veiculo");
    printf("\n  [5] - Alterar Quantidade em Estoque de um Veiculo");
    printf("\n  [6] - Voltar");
    printf("\n\n  Informe uma opcao: ");
    scanf("%i",&escolha);
    switch(escolha)
    {
        case 1:  system("cls");
                 consulta(conexao);
                 printf("\nInforme o ID do Veiculo que deseja alterar a Cor: ");
                 scanf("%i",&id);
                 update_cor(conexao,id);
                 break;
        case 2: system("cls");
                 consulta(conexao);
                 printf("\nInforme o ID do Veiculo que deseja alterar a Marca: ");
                 scanf("%i",&id);
                 update_marca(conexao,id);
                 break;
        case 3:  system("cls");
                 consulta(conexao);
                 printf("\nInforme o ID do Veiculo que deseja alterar o Valor: ");
                 scanf("%i",&id);
                 update_valor(conexao,id);
                 break;
        case 4:  system("cls");
                 consulta(conexao);
                 printf("\nInforme o ID do Veiculo que deseja alterar o Ano: ");
                 scanf("%i",&id);
                 update_ano(conexao,id);
                 break;
        case 5:  system("cls");
                 consulta(conexao);
                 printf("\nInforme o ID do Veiculo que deseja alterar a Quantidade em Estoque: ");
                 scanf("%i",&id);
                 update_qt(conexao,id);
                 break;
        case 6:  system("cls");
                 menu(conexao);
                 break;
        default: printf("\n   Opcao escolhida invalida! Tente novamente!\n\n");
                 update(conexao);
    }
}

int checa_ano()
{
    int save_ano,ano,qt_digitos;
    char string_ano[3];
    strcpy(string_ano,"");
    printf("\nInforme o ano do veiculo: ");
    scanf("%i",&ano);

    save_ano=ano;

    sprintf(string_ano,"%i",ano);
    qt_digitos=strlen(string_ano);
    if(qt_digitos!=4)
    {
        printf("\nAno informado invalido! Tente novamente!");
        checa_ano();
    }
    else
    return save_ano;
}

void update_cor(MYSQL conexao,int id)
{
    char cor_carro[25],query[1024];
    MYSQL_RES *consulta;
    sprintf(query,"SELECT * from Veiculos where Veiculos.id_veiculo=%i",id);

    int achou=busca_id(conexao,id,query);

    if(achou==1)
    {
        printf("\nInforme a nova cor: ");
        fflush(stdin);
        scanf(texto,cor_carro);
        while(strcmp(cor_carro,"")==0)
        {
          printf("\nCor invalida! Tente novamente!\n");
          printf("\nInforme a cor do veiculo: ");
          fflush(stdin);
          scanf(texto,cor_carro);
        }
        sprintf(query,"update Veiculos set cor='%s' where id_veiculo=%i",cor_carro,id);
        if(mysql_query(&conexao,query))
        printf("Erro: %s\n",mysql_error(&conexao));
        else
        {
            system("cls");
            printf("\n   Cor atualizada com sucesso!\n");
            update(conexao);
        }
    }
    else
    {
        system("cls");
        printf("\n  ID nao presente na lista! Tente novamente\n");
        update(conexao);
    }
}

void update_ano(MYSQL conexao,int id)
{
    char query[1024];
    float valor;
    MYSQL_RES *consulta;
    sprintf(query,"SELECT * from Veiculos where Veiculos.id_veiculo=%i",id);

    int achou=busca_id(conexao,id,query);

    if(achou==1)
    {
        int ano=checa_ano();
        sprintf(query,"update Veiculos set ano=%i where id_veiculo=%i",ano,id);
        if(mysql_query(&conexao,query))
        printf("Erro: %s\n",mysql_error(&conexao));
        else
        {
            system("cls");
            printf("\n   Ano atualizado com sucesso!\n");
            update(conexao);
        }
    }
    else
    {
        system("cls");
        printf("\n  ID nao presente na lista! Tente novamente\n");
        update(conexao);
    }
}

void update_marca(MYSQL conexao,int id)
{
    char marca[20],query[1024];
    MYSQL_RES *consulta;
    sprintf(query,"SELECT * from Veiculos where Veiculos.id_veiculo=%i",id);

    int achou=busca_id(conexao,id,query);

    if(achou==1)
    {
        printf("\nInforme a nova Marca: ");
        fflush(stdin);
        scanf(texto,marca);
        while(strcmp(marca,"")==0)
        {
          printf("\nMarca invalida! Tente novamente!\n");
          printf("\nInforme a Marca do veiculo: ");
          fflush(stdin);
          scanf(texto,marca);
        }
        sprintf(query,"update Veiculos set marca='%s' where id_veiculo=%i",marca,id);
        if(mysql_query(&conexao,query))
        printf("Erro: %s\n",mysql_error(&conexao));
        else
        {
            system("cls");
            printf("\n   Marca atualizada com sucesso!\n");
            update(conexao);
        }
    }
    else
    {
        system("cls");
        printf("\n  ID nao presente na lista! Tente novamente\n");
        update(conexao);
    }
}

void update_valor(MYSQL conexao,int id)
{
    char query[1024];
    float valor;
    MYSQL_RES *consulta;
    sprintf(query,"SELECT * from Veiculos where Veiculos.id_veiculo=%i",id);

    int achou=busca_id(conexao,id,query);

    if(achou==1)
    {
        printf("\nInforme o novo valor do veiculo: ");
        fflush(stdin);
        scanf("%f",&valor);
        while(valor<2500)
        {
            printf("\nValor suspeito! Tente novamente!\n");
            printf("\nInforme o novo valor do veiculo: ");
            fflush(stdin);
            scanf("%f",&valor);
        }
        sprintf(query,"update Veiculos set valor=%f where id_veiculo=%i",valor,id);
        if(mysql_query(&conexao,query))
        printf("Erro: %s\n",mysql_error(&conexao));
        else
        {
            system("cls");
            printf("\n   Valor atualizado com sucesso!\n");
            update(conexao);
        }
    }
    else
    {
        system("cls");
        printf("\n  ID nao presente na lista! Tente novamente\n");
        update(conexao);
    }
}

void update_qt(MYSQL conexao,int id)
{
    char query[1024];
    int estoque;
    MYSQL_RES *consulta;
    sprintf(query,"SELECT * from Estoque where Estoque.id_veiculo=%i",id);

    int achou=busca_id(conexao,id,query);

    if(achou==1)
    {
        printf("\nDefina a nova quantidade em estoque do veiculo: ");
        fflush(stdin);
        scanf("%i",&estoque);
        while(estoque<0)
        {
            printf("\nQuantidade invalida! Tente novamente!\n");
            printf("\nDefina a nova quantidade em estoque do veiculo: ");
            fflush(stdin);
            scanf("%i",&estoque);
        }
        sprintf(query,"update Estoque set quantidade_estoque=%i where id_veiculo=%i",estoque,id);
        if(mysql_query(&conexao,query))
        printf("Erro: %s\n",mysql_error(&conexao));
        else
        {
            system("cls");
            printf("\n   Estoque atualizado com sucesso!\n");
            update(conexao);
        }
    }
    else
    {
        system("cls");
        printf("\n  ID nao presente na lista! Tente novamente\n");
        update(conexao);
    }
}

void realizar_venda(MYSQL conexao,int id)
{
    char query[1024],comprador[50];
    int estoque,venda;
    MYSQL_RES *consulta;
    sprintf(query,"SELECT * from Estoque where Estoque.id_veiculo=%i",id);

    int achou=busca_id(conexao,id,query);

    if(achou==1)
    {
        estoque=checa_estoque(conexao,id,query);
        if(estoque>0)
        {
            printf("\nInforme a quantidade do carro que sera vendida: ");
            fflush(stdin);
            scanf("%i",&venda);
            while(venda>estoque || venda==0)
            {
                if(venda>estoque || venda==0)
                printf("\nA quantidade a ser vendida eh invalida! Tente novamente!\n");
                printf("\nInforme a quantidade do carro que sera vendida: ");
                fflush(stdin);
                scanf("%i",&venda);
            }

            printf("\nInforme o nome do comprador: ");
            fflush(stdin);
            scanf(texto,comprador);
            while(strcmp(comprador,"")==0)
            {
              printf("\nInforme o nome do comprador: ");
              fflush(stdin);
              scanf(texto,comprador);
            }
            strcpy(query,"");
            sprintf(query,"INSERT INTO Venda (id_veiculo_venda,nome_comprador,quantidade) VALUES (%i,'%s',%i)",id,comprador,venda);
            if(mysql_query(&conexao,query))
            printf("\nNão foi possível executar a inserção\nERRO: %s\n", mysql_error(&conexao));
            else
            {
                sprintf(query,"update Estoque set quantidade_estoque=%i where id_veiculo=%i",estoque-venda,id);
                if(mysql_query(&conexao,query))
                printf("Erro: %s\n",mysql_error(&conexao));
                else
                {
                    system("cls");
                    printf("\n  Venda realizada com sucesso!\n");
                    menu(conexao);
                }
            }
        }
        else
        {
            system("cls");
            printf("\n   Estoque do Veiculo informado indisponivel!\n\n");
            menu(conexao);
        }
    }
    else
    {
        system("cls");
        printf("\n  ID nao presente na lista! Tente novamente\n");
        menu(conexao);
    }
}
int busca_id(MYSQL conexao, int id, char query[1024])
{
    int id_busca;
    MYSQL_ROW rs_linhas;
    MYSQL_RES *consulta;

    if(mysql_query(&conexao,query))
    printf("Erro: %s\n",mysql_error(&conexao));
    else
    {
        consulta = mysql_store_result(&conexao);
        if (consulta)
        return 1;
        else
        return 0;
     }
}

int checa_estoque(MYSQL conexao, int id, char query[1024])
{
    int estoque;
    MYSQL_ROW rs_linhas;
    MYSQL_RES *consulta;

    if(mysql_query(&conexao,query))
    printf("Erro: %s\n",mysql_error(&conexao));
    else
    {
        consulta = mysql_store_result(&conexao);
        if (consulta)
        {
            while ((rs_linhas=mysql_fetch_row(consulta))!=NULL)
            estoque = atoi(rs_linhas[1]);
        }
        mysql_free_result(consulta);
     }
     return estoque;
}
