#include<stdio.h>
int main()
{
    int n,rem,odd,even;
    printf("enter a number");
    scanf("%d",&n);
    odd=even=0;
    while(n>0)
    {
        rem=n%10;

    if(rem%2==1)
    {
        odd++;
    }
    else
    {
       even++;
    }
    n=n/10;
    }
    printf("odd :%d even digitd:%d\n",odd,even);
}
