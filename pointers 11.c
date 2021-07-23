#include<stdio.h>
void readarray(int *a,int n);
void printarray(int *a,int n);
int main()
{
    int a[50],n;
    printf("enter the  value of n");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);

}
void readarray(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
}
void printarray(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d",*(a+i));
    }
}

