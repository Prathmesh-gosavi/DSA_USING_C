#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node *)malloc(sizeof(struct node))

struct node
{
	struct node *prev;
	int data;
	struct node *next;
	
};

struct node * accept(int n)
{
	struct node *f,*s,*t;
	f=NEWNODE;
	printf("enter the data:");
	scanf("%d",&f->data);
	f->prev=NULL;
	f->next=NULL;
	s=f;

	for(int i=2;i<=n;i++)
	{
		t=NEWNODE;
		printf("enter the data:");
		scanf("%d",&t->data);
		s->next=t;//join a node;
		t->prev=s;//join a node to reverse;
		t->next=NULL;
		s=s->next;
	}
	return f;

}

void display(struct node *f)
{
	struct node *t;

	

	for(t=f;t!=NULL;t=t->next)
	{
		printf("%d->",t->data);
	}
	printf("NULL");
}

void revdisplay(struct node *f)
{
	struct node *t;

	for(t=f;t->next!=NULL;t=t->next);

	for( ;t!=NULL ;t=t->prev)
		printf("%d->",t->data);



	printf("NULL");
	
}

struct node * deleteanyposition(struct node *f,int pos)
{
	struct node *t,*s;

	if(pos==1)
	{
		t=f;
		f=f->next;
		free (t);
		f->prev=NULL;

		return f;

	}
	else
	{
		s=f;

		for(int i=1;i<=pos-2 &&  s!=NULL &&s->next!=NULL;i++)
		{
			s=s->next;
		}

		if(s==NULL ||s->next==NULL)
		{
			printf("envalid position\n");

			return f;
		}
		else
		{
			t=s->next;
			s->next=t->next;
			if(t->next!=NULL)
			{
			t->next->prev=s;				
			}
			free(t);

			return f;
		}

	}

}
struct node * addanyposition(struct node *f,int pos)
{
	struct node *t,*s;

	t=NEWNODE;
	printf("enter a node to add:");
	scanf("%d",&t->data);
	t->next=NULL;
	t->prev=NULL;

	if(pos==1)
	{
		t->next=f;
		f->prev=t;
		f=t;
		return f;


	}
	else
	{
		s=f;
		for(int i=1;i<=pos-2 && s!=NULL;i++)
		{
			s=s->next;
		}
		if(s==NULL )
		{
			printf("\nplese enter the sufficent position\n");
			free(t);

			return f;
		}
		else
		{
 			t->next=s->next;
 			t->prev=s;

 			if(s->next!=NULL)
 			{
 				s->next->prev=t;
 			}
 			s->next=t;
 			free(t);
 			return f;

		}

	}
}
struct node* eraseall(struct node *f)
{
	struct node *t;


	while(f!=NULL)
	{
		t=f;
		f=f->next;
		free(t);
	}
	return f;
}

int main()
{	struct node *head;
	int n;
	printf("how many node you want to create:");
	scanf("%d",&n);

	head=accept(n);

	printf("linked list :");
	display(head);

	printf("\nreverse linked list :");
	revdisplay(head);

	int pos;
	printf("enter the position to delete");
	scanf("%d",&pos);
	head = deleteanyposition(head,pos);
	display(head);

	printf("enter the position to add");
	scanf("%d",&pos);
	head = addanyposition(head,pos);
	display(head);


	head=eraseall(head);
	if(head==NULL)
		printf("\nALL MWMORY IS FREE");
	
	return 0;
}