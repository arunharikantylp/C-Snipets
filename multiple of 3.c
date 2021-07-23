#include<stdio.h>
int main()
{
    int i,n,sum=0,rem,fact,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n)
    {i=1,fact=1;


        rem=n%10;
    while(i<=rem)
    {
        fact=fact*i;
        i++;
    }
    sum=sum+fact;
    n=n/10;

    }if(sum==temp)
    printf("%d strong",temp);
    else
        printf("%d not strong",temp);
        return 0;
}
