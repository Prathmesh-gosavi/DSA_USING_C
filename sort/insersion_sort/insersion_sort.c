#include<stdio.h>

void accept(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("enter the data");
        scanf("%d",&a[i]);
    }

}
void insersion_sort(int a[],int n)
{
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        for(int j=i-1;j>=0;--j)
        {
            if(a[j]>t)
            {
                a[j+1]=a[j];
            }
            else
                break;
        }
        a[j+1]=temp;
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

    insersion_sort(a,n);

    display(a,n);

    return 0;

}