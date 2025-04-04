#include<stdio.h>
#include<stdlib.h>
#define FREE -1
#define SIZE 10
#define FULL -100


int ht[SIZE];

 void init()
{
	int i;

	for(i=0;i<SIZE;i++)
	{
		ht[i]=FREE;
	}
}

int hash(int  data)
{	
	int k,i;

	k = data % SIZE;//k=5

	if(ht[k]==-1)
	{
		return k;
	}
	else
	{
		printf(" for data %d collision is occured at %d  ",data,k);
	}

	i = (k+1)%SIZE;

	while(i!=k)
	{
		if(ht[i]==FREE)//-1
		{
			return i;
		}
		else
		{
			printf(" for data %d collision is occured at %d  ",data,i);

		}

		i =(i+1)%SIZE;
	}




	return FULL;
}

void display()
{
	int i;

	printf("hash table:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("[%d] : %d\n",i,ht[i]);
	}
}

int main()
{
	int i,k,n,data;

	init();

	printf("how many numbers:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter the data:");
		scanf("%d",&data);
		k =hash(data);//count a index to save a data

		if(k==FULL)
		{
			printf("NO space in hash table for DATA %d \n",data);
		}
		else
		{	
			ht[k]=data;
			printf("DATA %d is stored at key %d \n",data,k);
		}
	}

	display();

}