#define Size 50
#define BOTTOM -1

char stack[Size];
int TOP;

void init()
{
	TOP=BOTTOM;
}

int isempty()
{
	if(BOTTOM==TOP)
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
	if(TOP==Size-1)
	{
		return 1;

	}
	else
	{
		return 0;
	}
}

	if(isfull())
	{
		printf("STACK IS OVERFLOW" );
	}
	else
	{
		TOP++;
		stack[TOP]=data;
	}


char pop()
{
	char data;
	if(isempty())
	{
		printf("STACK is EMPTY");

	}
	else
	{	
		data = stack[TOP];
		TOP--;
		return data;
	}
}

char peek()
{
	if(isempty())
	{
		printf("\nSTACK is EMPTY /underflow");
	}
	else
	{	
		return stack[TOP];
	}
}
