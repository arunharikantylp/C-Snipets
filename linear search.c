#include<stdio.h>
void readarray(int a[],int n);
void printarray(int a[],int n);
void linear(int a[50],int n,int element);
int main()
{
    int a[50],n,element;
    printf("Enter the value of n");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    printf("Enter the number to search");
    scanf("%d",&element);
    linear(a,n,element);
}
void readarray(int a[50],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void printarray(int a[50],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
void linear(int a[50],int n,int element)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("number is available");
    }
    else
    {
        printf("Not available");
    }
}



