#include<iostream>

     struct myList
     {
       int data;
   struct myList *next;
      };

    struct myList *start=NULL;  

    //this method removes a node from the position index
    void remove(int index)
    {
           myList *traverse = start;    
           myList *traverseNext = NULL;

           int i = 1;   
          while(i<(index-1))
           {
                  traverse = traverse->next;
          i++;
           }
              traverseNext = traverse;
          traverse = traverse->next;
          if(traverse->next == NULL)
          {     
         delete traverse;
         traverseNext->next = NULL;
         traverse = NULL;
          return;
           }

             else
          {     
          traverseNext->next = traverse->next;
          delete traverse;
          traverse = NULL;
           return;
           }

    }




int main(void)
   {
      myList *node1;
      myList *node2;    
      myList *node3;    

         node1 = new myList;    
         node2 = new myList;    //Created 3 nodes of type myList
         node3 = new myList;    

         node1->data = 10;
         node1->next = node2;


         node2->data = 20;
         node2->next = node3;


         node3->data = 30;
         node3->next = NULL;

         start = node1;     //start is pointing to node1
         remove(2);      //removing the node 2, so the output will be 10 30
        while(start)  //iterating through all the nodes from start, since start
       {              //is pointing to the first node.
    std::cout<<start->data<<" ";
    start = start->next;

           }
    } 