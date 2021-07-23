#include<stdio.h>
#include<math.h>
int main()
{
    int i,x, n;
    float sum=0,fact=1;
    printf("enter a number");
     printf("enter value for x");
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {   fact=fact*i;
        sum=sum+(fact)/(pow(x,i));
    }
    printf("%f",sum);
}

