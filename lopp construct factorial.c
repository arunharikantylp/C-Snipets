#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input\n");
    }
    else
    {
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("FACT=%d",fact);
    }
}
