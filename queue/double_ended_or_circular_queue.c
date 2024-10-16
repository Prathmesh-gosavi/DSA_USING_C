#include<stdio.h>
#define START 0
#define SIZE 3

int front;
int rear;
int cq[SIZE];

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
	if((rear+1)%SIZE==front)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void addq(int item)
{
	if(isfull())
	{
		printf("queue is full\n");
		return;
	}
	else
	{
		//cq[rear]=data;
		//rear++

		rear=(rear+1)%SIZE;
		cq[rear]=item;
		printf("\ndata added succesfully:%d",item);
	}
}

int delq()
{
	if(isempty())
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
		front=(front+1)%SIZE;
		return cq[front];
	}
}

int peek()
{
	if(isempty())
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
		//front=(front+1)%SIZE;
		return cq[(front+1)%SIZE];
	}
}





int main()
{
	init();
	addq(11);
	addq(22);
	addq(33);

	
	//printf("\ndeleted queue is %d",delq());

	printf("\npeeked data is %d",peek());
	printf("\npeeked data is %d",peek());
	printf("\npeeked data is %d",peek());


	




	return 0;
}