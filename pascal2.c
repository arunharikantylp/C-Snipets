#include<stdio.h>
long fact(int n);
int main()
{
    int n,c,i;
    printf("Enter the row");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(c=0;c<=(n-i-2);c++)
            printf("  ");

        for(c=0;c<=i;c++)

            printf("\t%1d",fact(i)/(fact(c)*fact(i-c)));

        printf("\n");
    }


}
long fact(int n)
{
    int i;
    long fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
