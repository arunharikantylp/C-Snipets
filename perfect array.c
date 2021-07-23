#include<stdio.h>
void readarray(int a[],int n);
void printarray(int a[],int n);
void perfect(int a[50],int n);
int main()
{
    int a[50],n,element;
    printf("Enter the value of n");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    perfect(a,n);
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
void perfect(int a[50],int n)
{
    int i,j,num,sum,rem,flag=0;
    for(i=0;i<n;i++)
    {
        num=a[i];
        sum=0;
        for(j=1;j<num;j++)
        {
            rem=num%j;
            if(rem==0)
            {
                sum=sum+j;
                if(sum==num)
               {
                flag=1;
                break;
               }
            }
        }

    }
    if(flag==1)
        {
            printf("\nPerfect array");
        }
        else
        {
            printf("\nNOT");
        }

}






