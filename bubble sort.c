#include<stdio.h>
void readarray(int a[],int n);
void printarray(int a[],int n);
int bubblesort(int a[],int n);
int main()
{
    int a[50],n;
    printf("Enter the value of n");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    bubblesort(a,n);
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
        printf("\n%d",a[i]);
    }
}
int bubblesort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
