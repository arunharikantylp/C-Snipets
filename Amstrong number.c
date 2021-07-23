#include<stdio.h>
int main()
{
    int i,num,rem,sum=0,rev=0,temp;
    printf("enter a number");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
     if(sum==temp)

    {
        while(temp>0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        printf("%d",rev);
    }

    else
    {
        printf("not armstrong number");
    }

  }
