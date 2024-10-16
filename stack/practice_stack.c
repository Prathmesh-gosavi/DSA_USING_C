#include<stdio.h>
#define SIZE 2
#define START -1

int stack[SIZE];
int front,rear;


void init()
{
	front=START;
	rear=START;
}

int isempty()
{
	if(front==rear)
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
	if(rear==SIZE-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(int item)
{
	if(isfull())
	{
		printf("stack is full\n");
	}
	else
	{
	rear++;
	stack[rear]=item;

	printf("data added succesfully %d\n",stack[rear]);
	}
}

int pop()
{	
	if(isempty())
	{
		printf("stack is empty\n");
	}
	else
	{
	front++;
	return stack[front];
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
	return stack[front+1];
	}
}

int main()
{
	init();

	push(11);
	push(22);
	push(33);

	printf("\ndata deleted succesfully %d",pop());

	printf("\ndata peeked succesfully %d",peek());
	printf("\ndata peek
		ed succesfully %d",peek());





	return 0;
}