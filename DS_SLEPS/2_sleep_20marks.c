#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
#define BOTTOM -1

int stack[SIZE];
int tempstack[SIZE];
int top;
int temptop;

void init()
{
	top=BOTTOM;
} 
int isempty()
{
	if(top==BOTTOM)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isfull()
{
	if(top==SIZE-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int data)
{
	if(isfull())
	{
		printf("stack is overflow !!\n");
	}
	else
	{
	top++;
	stack[top]=data;
	printf("data push succesfully %d\n",data);
	}
}

int pop()
{
	int data;

	if(isempty())
	{
		printf("stack is empty");
	}
	else
	{
		data=stack[top];
		top--;
		return data;
	}

}
int peek()
{

	if(isempty())
	{
		printf("stack is empty");
	}
	else
	{
		
		return stack[top];
	}
}

void display()
{
	if(isempty())
	{
		printf("stack is overflow\n");
	}
	else
	{
		for(int i=0;i<=top;i++)
		{
			printf("%d\n",stack[i]);
		}
		printf("\n");
	}
}

void copystack()
{
	temptop=BOTTOM;

	while(!isempty())
	{
		//int data;
	tempstack[++temptop]=pop();
	}

	for(int i=temptop;i>=0;i--)
	{
		push(tempstack[i]);
		
		printf("Data pushed to restored original stack: %d\n", tempstack[i]);
	}


}

int main()
{

	init();



	push(11);
	push(22);
	push(33);
	push(44);

	printf("data display before temp\n");
	display();

	///printf("data poped %d",pop());
//	printf("data poped %d",pop());

	//printf("data poped %d",peek());

	copystack();

	printf("data display after temp\n");

	display();




}

