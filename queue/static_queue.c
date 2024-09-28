#include<stdio.h>
#define SIZE 5
#define START -1

int queue[SIZE];
int rear;
int front;

void init()
{
	rear=START;
	front=START;
}

int isempty()
{
	if(rear==front)
	
		return 1;
	
	else
		return 0;
}

int isfull()
{
	if(rear==SIZE-1)
		return 1;
	else
		return 0;
}

void addq(int data)
{
	if(isfull())
	{
		printf("queue is full");
	}
	else
	{
	  rear++;
	  queue[rear]=data;
	  printf("data added succesfully %d\n",data);
    }
}

int delq()
{
	if(isempty())
	{
		printf("stack is empty\n");
	}
	else{

		front++;
		return queue[front];
	}
}
int peekq()
{
	if(isempty())
	{
		printf("stack is empty\n");
	}
	else{

		return queue[front+1];//it is front  is -1 then not front ++ front +1 cha index
	}
}


int main()
{
	init();
	addq(11);
	addq(22);
	addq(33);

	printf("data deleted %d:\n",delq());
	printf("peeked data %d:\n",peekq());

	return 0;
}