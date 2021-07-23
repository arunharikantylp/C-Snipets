#include<stdio.h>
void readarray(int *a,int n);
void printarray(int *a,int n);
void sumofarray(int *a,int n);
int main()
{
    int a[50],n,sum;
    printf("enter the  value of n");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    sumofarray(a,n);

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
void sumofarray(int *a,int n)
{
   int i,sum=0,avg;
    for(i=0;i<n;i++)
    {
        sum=sum+*(a+i);
     } printf("SUM=%d",sum);
    avg=sum/n;
     printf("AVG=%d",avg);
}



