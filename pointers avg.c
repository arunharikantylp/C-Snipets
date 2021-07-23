#include<stdio.h>
void readarray(int *a,int n);
void printarray(int *a,int n);
 average(int *a,int n,);
int main()
{
    int a[50],n,sum=0;
    printf("enter the  value of n");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    sumofarray(a,n,&sum);
    printf("SUM=%d",*sum);

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
void sumofarray(int *a,int n,int *sum)
{
   int i,sum=0;
    for(i=0;i<n;i++)
    {
        *sum=*sum+*(a+i);
     }
}



