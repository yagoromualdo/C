// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int primo, i;
	
	for (i = 1; i <= 500; i++) {
		primo = 0 + i;
		if (primo % 2 != 0 && primo % 3 != 0 && primo % 5 != 0 && primo % 7 != 0 && primo % 11 != 0 && primo % 13 != 0)
		{
			printf("%i\n", primo);
			
		}
		if (primo == 3 || primo == 5 || primo == 7 || primo == 11 || primo == 13)
			{
				printf("%i\n", primo);
			}
	}
}

