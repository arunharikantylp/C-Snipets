#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n>0)
    {
       if(n%10)
        count++;
       n=n/10;
    }
    printf("%d",count);
}
