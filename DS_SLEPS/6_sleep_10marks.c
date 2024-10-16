#include<stdio.h>
#include<stdio.h>

void accept(int a[], int n)
{


	for(int i=0;i<n;i++)
	{
		printf("enter data:");
		scanf("%d",&a[i]);

	}
}

void display(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d  ",a[i]);
}

void selection_sort(int a[],int n)
{
	int t;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}



int main()
{
	int n;
	int a[50];

	printf("how many data:");
	scanf("%d",&n);

		accept(a,n);

		printf("\nbefore sort:");
		display(a,n);

		selection_sort(a,n);

		printf("\nafter sort:");
		display(a,n);


		

	return 0;
}