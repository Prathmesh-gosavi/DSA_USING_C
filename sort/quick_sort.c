#include<stdio.h>

void accept(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("enter the data");
        scanf("%d",&a[i]);
    }

}

int  partition(int a[],int lb,int ub)
{
	int i,j,pivot;

	i=lb+1;
	j=ub;
	pivot=a[lb];

	while(i<=j)
	{
		while(a[i] < pivot)
		{
			i++;
		}
		while(a[j] > pivot)
		{
			j--;
		}
		if(i<j)
		{	int t;

			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}

	}

		a[lb]=a[j];
		a[j]=pivot;

		return j;


	
}

void quick_sort(int a[],int lb,int ub)
{
	int j;

	if(lb<ub)
	{

	j = partition(a,lb,ub);

	quick_sort(a,lb,j-1);
	quick_sort(a,j+1,ub);
    
    }
   
}

void display(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("%d  ",a[i]);
    }
}

int main()
{

    int n;
    int a[30];

    printf("how many element");
    scanf("%d",&n);

    accept(a,n);
    printf("before sort\n");
    display(a,n);

    quick_sort(a,0,n-1);

    printf("after sort\n");
    display(a,n);

    return 0;

}