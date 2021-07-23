#include<stdio.h>
void readarray(int a[],int n);
void printarray(int a[],int n);
void binary(int a[50],int n,int element);
int main()
{
    int a[50],n,element;
    printf("Enter the value of n");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    printf("Enter the number to search");
    scanf("%d",&element);
    binary(a,n,element);
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
void binary(int a[50],int n,int element)
{
    int first=0,last=n-1,middle,flag=0;
    while(first<=last)
    {   middle=(first+last)/2;
        if(a[middle]==element)
        {
            flag=1;
            break;
        }
         else if(a[middle]>element)
        {
            flag=0;
            last=middle-1;
        }
        else
        {
            flag=0;
            first=middle+1;
        }

    }
    if(flag==1)
    {
        printf("number available");
    }
    else
    {
        printf("Not available");
    }

}


