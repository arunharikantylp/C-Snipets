#include<stdio.h>
void GCD_LCM(int n1,int n2);
int main()
{
    int n1,n2;
    printf("enter two numbers:");
    scanf("%d%d",&n1,&n2);
    GCD_LCM(n1,n2);
}
void GCD_LCM(int n1,int n2)
{ int temp,a=n1,b=n2,GCD,LCM;
  while(n2!=0)
{
    temp=n2;
    n2=n1%n2;
    n1=temp;
}
GCD=n1;
printf("GCD=%d\n",GCD);
LCM=(a*b)/GCD;
printf("LCM=%d",LCM);
}

