#include<stdio.h>
#include<stdlib.h>
#define NEWNODE (struct node *)malloc(sizeof(struct node))

struct  node 
{
	struct node *lc;
	int data;
	struct node *rc;
};

struct node *root;
int cnt;

void init()
{
	root=NULL;
}

void bst(int item)
{
	struct node *t,*t1,*t2;

	t=NEWNODE;
	t->data=item;
	t->lc=NULL;
	t->rc=NULL;

	if(root==NULL)
	{
		root=t;
	}
	else
	{
		t1=root;

		while(t1!=NULL)
		{
			t2=t1;
			
			if(item<=t1->data)
			{
				t1=t1->lc;

			}
			else
			{
				t1=t2->rc;
			}
		}

			if(item<=t2->data)
			{
				t2->lc=t;
			}
			else
			{
				t2->rc=t;
			}

		
	}
}

void Inorder( struct node *t)
{
	if(t!=NULL)
	{
		Inorder(t->lc);
		printf("%d ",t->data );
		Inorder(t->rc);
	}

}


int search(struct node *t,int key)
{
	while(t!=NULL)
	{
		if(t->data==key)
		{
			return 1;
		}
		else if(key< t->data)
		{
			t=t->lc;
		}
		else
		{
			t=t->rc;
		}

	}
	return 0;
}

int  compare(struct node *t1,struct node *t2)
{
	if(t1==NULL && t2 ==NULL)
	{
		return 1;
	}
	
	if(t1==NULL || t2 ==NULL)
	{
		return 0;
	}

	if(t1->data !=t2->data)
	{
		return 0;
	}

	return compare(t1->lc,t2->lc)&& compare(t1->rc,t2->rc);
}

int main()
{
	int i,data,n,item;

	init();

	printf("how many numbers to add :");
	scanf("%d",&n);

	for( i=0;i<n;i++)
	{
		printf("enter the data :");
		scanf("%d",&item);
		bst(item);
	}

	struct node *root1 =root;

	init();

	printf("how many numbers to add :");
	scanf("%d",&n);

	for( i=0;i<n;i++)
	{
		printf("enter the data :");
		scanf("%d",&item);
		bst(item);
	}

	struct node *root2 =root;


	if (compare(root1, root2))
    {
        printf("\nThe trees are equal.\n");
    }
    else
    {
        printf("\nThe trees are not equal.\n");
    }

    return 0;


	
	/*
	printf("displaying a data :");
	Inorder(root);

	printf("\nenter the data to search:");
	scanf("%d",&data);


	if(search(root,data))
	{
		printf("data is found\n ");
	}
	else
	{
		printf("data is not found");
	}
*/
}