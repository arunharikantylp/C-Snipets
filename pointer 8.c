#include<stdio.h>
int sumofn(int n,int *sum);
int main()
{
    int n,S=0;
    printf("enter the number");
    scanf("%d",&n);
    sumofn(n,&S);
    printf("sum  of %dth num is %d",n,S);
}
int sumofn(int n,int *sum)
{
   int i;
   for(i=0;i<=n;i++)
   {
       *sum=*sum+i;
   }

}


