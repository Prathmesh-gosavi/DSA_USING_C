#include<stdio.h>
#include<stdlib.h>

void accept(int a[],int n)
{
	for(int i=0;i<n;++i)
	{
		printf("enter data:");
		scanf("%d",&a[i]);
	}
}

void display(int a[],int n)
{
	for(int i=0;i<n;++i)
	{
		printf("%d ",a[i]);
	}
}

void bobble_sort(int a[],int n)
{
	for(int i=n-1;i>0;--i)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]   =a[j] + a[j+1];
				a[j+1] =a[j] - a[j+1];
				a[j]   =a[j] - a[j+1];
			}
		}
	}
}



int main()
{
	int number;
	int *array;//creating pointer variable to  store a dynamicaly allocate base address


	printf("how many data you want store");
	scanf("%d",&number);

	array = (int *)malloc(number *sizeof(int));//creating dynamically;
	if(array==NULL)
	{
		printf("insufficent memory to creating dynamically");
		exit(0);
	}

	accept(array,number);
	printf("\nbefore sort");
	display(array,number);

	bobble_sort(array,number);
	printf("\nafter sort");
	display(array,number);

	free(array);//the line is very imp to dealloacate the memory
}