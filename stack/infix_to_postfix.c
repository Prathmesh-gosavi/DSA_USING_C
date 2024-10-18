	#include<stdio.h>
	#include<stdlib.h>
	#include "char.h"

	int size=5;
	struct ptab
	{
		char operator;
		int priority;
	};

	struct ptab optab[5]={{'$',3},{'*',3},{'/',2},{'+',1},{'-',1}};
					
	int get_priority(char ch)
	{
		for(int i=0;i<size;i++)
		{
			if(optab[i].operator==ch)
			{
				return optab[i].priority;
			}
		}
		return -1;
	}


	int main()
	{
		char str[50];
		printf("enter infix expression:");
		gets(str);


		for(int i=0;i<str[i];i++)
		{
			if(get_priority(str[i])==-1)
			{
				printf("%c",str[i]);
			}
			else
			{
				while(!isempty())
				{
					if(get_priority(peek())>=get_priority(str[i]))
					{
						printf("%c",pop());
					}
					else
					{
						break;
					}
				}

				push(str[i]);
			}
		}
		while(!isempty())
		{
			printf("%c",pop());
		}



		return 0;
	}