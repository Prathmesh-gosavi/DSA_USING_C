#include<stdio.h>

void accept(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("enter the data");
        scanf("%d",&a[i]);
    }

}

void merge(int a[],int lb,int mid,int ub)
{
	int temp[50];
	int k,i,j;

	i=lb;
	j=mid+1;
	k=lb;


	while(i <= mid && j <= ub)
	{
		if(a[i]<a[j])
		{
			temp[k] = a[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = a[j];
			j++;
			k++;
		}
	}

	while(i <= mid)
	{
		temp[k] = a[i];
		i++;
		k++;
	}

	while(j<= ub)
	{
		temp[k++] = a[j++];

		//j++;
		//k++;
	}

	for(k=lb; k<=ub;k++)
	{
		a[k]=temp[k];
	}
}

void merge_sort(int a[],int lb,int ub)
{
	int mid;

	if(lb<ub)
	{

	mid = (lb+ub)/2;

	merge_sort(a,lb,mid);
	merge_sort(a,mid+1,ub);
	merge(a,lb,mid,ub);
    
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

    merge_sort(a,0,n-1);

    printf("after sort\n");
    display(a,n);

    return 0;

}