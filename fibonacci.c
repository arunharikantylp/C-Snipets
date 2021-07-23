#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    printf("enter a limit");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\t%d\t",a,b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
