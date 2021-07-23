#include<stdio.h>
int main()
{
   int i=1,n,binary=0,rem;
   printf("Enter the number");
   scanf("%d",&n);
   while(n>0)
   {
       rem=n%2;
       binary=binary+rem*i;
       i=i*10;
       n=n/2;
   }
   printf("ans=%d",binary);
}
