#include<stdio.h>
void readarray(int *a,int n);
void printarray(int *a,int n);
void average(int *a,int n,float *avg);
void count(int *a,int n,float *avg,int *above_avg,int *below_avg,int *equal_avg);
int main()
{
    int a[50],n,*above_avg=0,*below_avg=0,*equal_avg=0;
    float avg=0;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    if(n<=0 || n>50)
    {
        printf("I N V A L I D   I N P U T");
    }
    else
        {
        readarray(a,n);
        printarray(a,n);
        average(a,n,&avg);
        count(a,n,&avg,&above_avg,&below_avg,&equal_avg);
        printf("\n\nAVERAGE=%f\n\n ABOVE AVERAGE=%d\n\n BELOW AVERAGE=%d\n\n EQUAL AVERAGE=%d\n\n",avg,above_avg,below_avg,equal_avg);
        }
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
void average(int *a,int n,float *avg)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+*(a+i);
    }
    *avg=(float)sum/n;
}
void count(int *a,int n,float *avg,int *above_avg,int *below_avg,int *equal_avg)
{   int i;
    for(i=0;i<n;i++)
    {
        if(*avg<*(a+i))
        {
          *above_avg=*above_avg+1;
        }
         else if(*avg>*(a+i))
        {
          *below_avg=*below_avg+1;
        }
        else
        {
          *equal_avg=*equal_avg+1;
        }
    }
}
