#include<stdio.h>
void average(int n,int *avg);
int main()
{

    int n,avg;
    printf("enter the number");
    scanf("%d",&n);
    average(n,&avg);
    printf("\nAVG %d",avg);
}
void average(int n,int *avg)
{
   int i,sum=0;
   for(i=0;i<=n;i++)
   {
       sum=sum+i;
   }
   printf("sum=%d",sum);
   *avg=(float)sum/n;

}


