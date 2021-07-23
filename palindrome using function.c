#include<stdio.h>
int pal(int n);
int main()
{
    int n,s;
    printf("enter the number");
    scanf("%d",&n);
    s=pal(n);
    if(n==s)
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }
}
int pal(int n)
{
    int rem,rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
