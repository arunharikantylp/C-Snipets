#include<stdio.h>
void readarray(int a[],int n);
void printarray(int a[],int n);
int selesort(int a[],int n);
int main()
{
    int a[50],n;
    printf("Enter the value of n");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    selesort(a,n);
    printarray(a,n);
}
void readarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}
int selesort(int a[],int n)
{
    int i,j,temp,min;
    for(i=0;i<n-1;i++)
    {   min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            if(min!=i)
            {
                temp=a[min];
                a[min]=a[i];
                a[i]=temp;
            }

        }
    }
}
