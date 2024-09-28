#include<stdio.h>
#include<stdlib.h>
#include"char.h"

int main()
{
 	int choice;
 	char data;

 	init();


  while(1)
  {

  
   printf("\n1.to add a data on stack\n");
   printf("\n2.delete a data in stack\n");
   printf("\n3.peek the data\n");
   printf("\n4.exit the application\n"); 
   printf("\nenter the choice you want to search:");
   scanf("%d",&choice);



   switch(choice)
   {
   case 1:
   	printf("\nenter the data to add in stack:");
   	scanf("%c",&data);
   	
   	push(data);
   	break;

   case 2:
        printf("\nyou reverse data:%c",pop());
   	break;
   
   case 3:
   	    printf("%c",peek());
   	break;

   case 4:
   	exit(0);

   default:

   	printf("\nInvalid choice !!!!!!!!!!!\n ");
   
   }

  }
	
}