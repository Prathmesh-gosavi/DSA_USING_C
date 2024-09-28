#include<stdio.h>
#include<stdlib.h>

void accept(char a[],int n)
{
	for(int i=0;i<n;++i)
	{
		getchar();
		printf("enter char:");
		scanf("%c",&a[i]);
	}
}

void display(char a[],int n)
{
	for(int i=0;i<n;++i)
	{
		printf("%c ",a[i]);
	}
}

void bobble_sort(char a[],int n)
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
	char *array;//creating pointer variable to  store a dynamicaly allocate base address


	printf("how many character you want store :");
	scanf("%d",&number);

	array = (char *)malloc(number *sizeof(char));//creating dynamically;
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