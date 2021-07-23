#include<stdio.h>
int main()
{
    int i,n,sum=0,rev=0,rem;
    printf("Enter a number\t");
    scanf("%d",&n);
    if(n%7==0 && n%9==0)
    {
        for(i=n;i>0;i=i/10)
        {
            rem=i%10;
            sum=sum+rem;
        }
        printf("SUM =\t%d",sum);
    }
    else
    {
        for(i=n;i>0;i=i/10)
        {
            rem=i%10;
            rev=rev*10+rem;
        }
        printf("REVERSE =\t%d",rev);
    }
}
