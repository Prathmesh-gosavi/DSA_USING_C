#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

#define NEWNODE (struct node *)malloc(sizeof(struct node))

struct node 
{
	int vertex;
	struct node *next;
};

struct node *AL[SIZE];
struct node *IAL[SIZE];
int nov;
int noe;

void init(struct node *l[])
{
	for(int i=0;i<SIZE;i++)
	{
		l[i]=NULL;
	}
}

void add_in_list(struct node *l[],int i,int v)
{
	struct node *t;
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

void accept()
{
	int i,j;

	printf("\nenter the vertex:");
	scanf("%d",&nov);

	printf("\nenter the edeges:");
	scanf("%d",&noe);

	for(int k=0;k<noe;k++)
	{
		printf("enter the vertex (vi vj):");
		scanf("%d %d",&i,&j);

		add_in_list(AL,i,j);
		add_in_list(IAL,j,i);

	}
}



void free_list(struct node *l[])
{
	struct node *t,*s;

	for(int i=0;i<nov;i++)
	{
		if(l[i]!=NULL)
		{
			for(s=l[i];s!=NULL;)
			{
				t=s;
				s=s->next;
				free(t);
			}
		}
		l[i]=NULL;
	}
}

void display_list(struct node *l[])
{
	int i;
	struct node *t;



	for(int i=0;i<nov;i++)
	{
		
		printf("V%d->",i);

		for(t=l[i];t!=NULL;t=t->next)
		{
			printf("[%d]->",t->vertex);
		}
		printf("NULL\n");
	}
}

void degree(struct node *l1[],struct node *l2[])
{
	int in,out;
	struct node *t;

	printf("Degree of each vertex:\n");

	for(int i=0;i<nov;i++)
	{
		in=0;
		out=0;
		for(t=l1[i];t!=NULL;t=t->next)
		{
			out++;
		}
		for(t=l2[i];t!=NULL;t=t->next)
		{
			in++;
		}

		printf("\nvertex:v%d INDEGREE=%d OUTDEGREE=%d TOTALDEGREE=%d\n",i,in,out,in+out);


	}
}

int main()
{

	init(AL);
	init(IAL);

	accept();

	printf("\n adjencancy list \n");
	printf("---------------------\n");
	display_list(AL);


	printf("\n Inverse adjencancy list \n");
	printf("---------------------\n");
	display_list(IAL);

	degree(AL,IAL);

	free_list(IAL);
	free_list(AL);

	return 0;
}