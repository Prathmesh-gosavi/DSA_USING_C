#include<stdio.h>
#include<stdlib.h>
#include "char.h"

int size=6;
struct ptab
{
	char operator;
	int priority;
};

struct ptab optab[6]={{'$',3},{'*',3},{'/',2},{'+',1},{'-',1},{'(',0}};
				
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
	char ch;
	printf("enter infix expression:");
	gets(str);


	printf("postfix expression:");
	for(int i=0;i<str[i];i++)
	{

		if(str[i]=='(')
		{
			push(str[i]);
			continue;
		}
		if(str[i]==')')
		{
			while(1)
			{
				ch=pop();
				if(ch=='(')
				{
					break;
				}
				printf("%c",ch);
			}
			continue;
		}
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