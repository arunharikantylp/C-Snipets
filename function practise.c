#include<stdio.h>
void gcd(int n);
int main()
{
   int n;
    printf("enter numbers");
    scanf("%d",&n);
    gcd(n);
}
void gcd(int n)
{
    int i=1,binary=0,rem;
    while(n>0)
    {
        rem=n%2;
        binary=binary+rem*i;
        i=i*10;
        n=n/2;
    }
    printf("%d",binary);

}
