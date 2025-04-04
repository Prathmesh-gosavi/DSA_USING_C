#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

#define NEWNODE (struct node *)malloc(sizeof(struct node))

struct node 
{
	int vertex;
	struct node *next;
};

struct node *AL[],*IAL[];
int nov;
int noe;

void init(struct node *L[])
{
	for(int i=0;i<SIZE;i++)
	{
		l[i]=NULL;
	}
}

void accept()
{
	int i,j;

	printf("\nenter the vertex:");
	scanf("%d",&nov);

	printf("\nenter the edeges:");
	scanf("%d",&noe);

	for(int i=0;i<noe;i++)
	{
		printf("enter the vertex (vi vj):");
		scanf("%d %d",&i,&j);

		add_in_list(AL,i,j);
		add_in_list(IAL,j,i);

	}
}

void add_in_list(struct node *l[],int i,int v)
{
	t=NEWNODE;
	t->vertex=v;
	t->next=NULL;

	if(l[i]==NULL)
	{
		l[i]=t;
	}
	else
	{
		t->next=l[i];
		l[i]=t;
	}
}

void free_list(struct node *l[])
{
	struct node *t,*s;

	for(int i=0;i<nov;i++)
	{
		if(l[i]!=NULL)
		{
			for(s=l[i];S!=NULL;)
			{
				t=s;
				s=s->next
				free(t);
			}
		}
		s[i]=NULL;
	}
}

void display_list(struct node *l[])
{
	int i;
	struct node *t;



	for(int i=0;i<nov;i++)
	{
		
		printf("V%d->",i);

		for(t=l[i];t->next!=NULL;t=t->next)
		{
			printf("[%d]->",t->vertex);
		}
		printf("NULL\n");
	}
}

void degree(struct node *l1[],struct node *l2[])
{
	int i,in,out,total;
	struct node *t;


	for(int i=0;i<nov;i++)
	{
		for(t=l1[i];t->!=NULL;t=t->next)
		{
			out++;
		}
		for(t=l2[i];t->!=NULL;t=t->next)
		{
			in++;
		}

		printf("vertex:v%d INDEGREE=%d OUTDEGREE=%d TOTALDEGREE=%d",i,in,out,in+out);


	}
}

int main()
{

	init(AL);
	init(IAL);


	return 0;
}