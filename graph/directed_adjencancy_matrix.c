#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

 int G[SIZE][SIZE];
int nov;
int noe;

void accept()
{
	int i,j,k;

	printf("how many vertices : ");
	scanf("%d",&nov);

	printf("how many edeges : ");
	scanf("%d",&noe);

	for(k=0;k<noe;k++)
	{
		printf("enter the edeges:vi vj :");
		scanf("%d %d",&i,&j);

		G[i][j]=1;


	}

}

void display()
{
	int i,j;

	for(int i=0;i<nov;i++)
	{

		for(j=0;j<nov;j++)
		{
			printf("%d ",G[i][j]);
		}
		printf("\n");
	}
}

int row_sum(int i)
{
	int j,sum;

	sum=0;

	for(int j=0;j<nov;j++)
	{
		sum=sum+G[i][j];
	}
	return  sum;
}

int col_sum(int j)
{
	int i,sum;

	sum=0;

	for(int i=0;i<nov;i++)
	{
		sum=sum+G[i][j];
	}
	return  sum;
}

void total_degree()
{
	int in,out,total;

	printf("total degree each vertex");
	for(int v=0;v<nov;v++)
	{


	in  = row_sum(v);
	out = col_sum(v);

	printf("\n V%d  INDEGREE=%d OUTDEGREE=%d Total degree of =%d\n",v,in,out,in+out);
	
	}
}


int main()
{
	accept();
	display();
	total_degree(); 




	return 0;
}