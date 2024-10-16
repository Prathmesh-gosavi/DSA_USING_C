#include<stdio.h>
#define SIZE 10
#define START -1

int queue[SIZE];
int front;
int rear;

void init()
{
	front=START;
	rear=START;
}
int isempty()
{
	return rear==front
	
}


int isfull()
{
	

	return rear == SIZE - 1;
}


void addq(int data)
{
	if(isfull())
	{
		printf("queue is full\n");
		//return -1;
	}
	else
	{
	rear++;
	queue[rear]=data;

	//printf("data add %d\n",data);
	}
}
 int delq()
 {
 	if(isempty())
 	{ 		
 		printf("queue is empty\n");
 		return -1;
  	}
  	else
  	{
  		front++;
  		return queue[front];
  	}
 }

 int peekq()
 {
 	if(isempty())
 	{ 		
 		printf("queue is empty\n");
 		return -1;
  	}
  	else
  	{
  		return queue[front+1];
  	}
 }

 void reverseq()
 {
 	int stack[SIZE];
 	int top;

 	top=START;

 	while(!isempty())
 	{
 		stack[++top] = delq()
 	}

 	for(int i=top;i>=0;i--)
 	{
 		addq(stack[i]);
 	}

 }

void displayq()
{
	   if (isempty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue contents:\n");
        for (int i = front + 1; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
        printf("\n");
    }
}


int main()
{
	init();

	
	addq(11);
	addq(21);
	addq(31);
	addq(41);

	/*printf("data deleted succesfully %d\n",delq());
	printf("data deleted succesfully %d\n",delq());


	printf("data peeked succesfully %d\n",peekq());
*/

	printf("before reverse");
	displayq();

	reverseq();


	printf("after reverse");
	displayq();



	return 0;
}