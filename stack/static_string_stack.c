
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"char.h"

int main()
{
 	int choice;
 	char s[50];
  char reversed[50];

 	init();


  while(1)
  {

  
   printf("\n1.to add a data on stack\n");
   printf("\n2.check palindrome\n");
   printf("\n3.peek the data\n");
   printf("\n4.exit the application\n"); 
  

   printf("\nenter the choice you want to search:");
   scanf("%d",&choice);


   switch(choice)
   {

   case 1:
   	
    getchar();
    printf("\nenter the string  to add in stack:");
    gets(s);
   	
    for(int i=0;s[i]!='\0';i++)
    {
     push(s[i]);
    }
   break;
   

   case 2:

    printf("\nyour reverse string:");
    int length = strlen(s);
                

    for (int i = 0; i < length; i++)
     {
      
       reversed[i] = pop();
               
     }
      reversed[length] = '\0';

       // Check if the original string is equal to the reversed string
                if (strcmp(s, reversed) == 0) {
                    printf("\"%s\" is a palindrome.\n", s);
                } else {
                    printf("\"%s\" is not a palindrome.\n", s);
                }
    
    printf("\n");

    init();
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