#include<stdio.h>
void fabonacci(int n);
int main()
{
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    fabonacci(n);
}
void fabonacci(int n)
{
    int f1=0,f2=1,f3,i;
    printf("%d %d",f1,f2);
    for(i=3;i<=n;i++)
    {    f3=f1+f2;
        f1=f2;
        f2=f3;
        printf("%d",f3);
    }
}
