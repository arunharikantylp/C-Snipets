#include<stdio.h>
int main()
{
    int i,n,rem,rev=0,temp;
    scanf("%d",&n);
     temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
     if(temp==rev)
        printf("pal");
        else
            printf("not");


}
