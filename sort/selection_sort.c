#include<stdio.h>

void accept(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        printf("enter the data");
        scanf("%d",&a[i]);
    }

}
void selection_sort(int a[],int n)
{
    int t,i,j;

    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(a[i]>a[j])
            {
                   t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
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

    selection_sort(a,n);

    display(a,n);

    return 0;

}