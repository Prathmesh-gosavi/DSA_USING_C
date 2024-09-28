#define NEWNODE (struct node*)malloc(sizeof(struct node))
#define BOTTOM NULL

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *top;


void init()
{
	top=BOTTOM;

}
int isempty()
{
	if(top==NULL)
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
	struct node *t;
	t=NEWNODE;

	if(t==NULL)
	{
		printf("stack is full");
		return;
	}

	t->data=item;
	t->prev=NULL;
	t->next=NULL;

	if(top==NULL)
	{
		top=t;
	}
	else
	{
		top->next=t;
		t->prev=top;
		t->next=NULL;
		top=top->next;//top=t;
	}

}

int pop()
{
	int data;
	struct node *t;

	if(isempty())
	{
		printf("stack is empty");
	}
	else
	{

		data=top->data;
		t=top;
		top=top->prev;
		free(t);

			if(top!=NULL)//if top is null before and you top->next free the you face segementation fault
			{
				top->next=NULL;
			}
    }
	return data;
}

int peek()
{
	if(isempty())
	{
		printf("stack is empty");
	}
	else
	{
		return top->data;
	}
}