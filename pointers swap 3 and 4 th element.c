#include<stdio.h>
  float swap34(float *ptr1,float *ptr2);
int main()
{
    int i,n;
    float a[10];
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the element one by one\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",a+i);
    }
    swap34(a+2,a+3);
    printf("the result array");
    for(i=0;i<n;i++)
   {
       printf("a[%d]=%f\n",i,a[i]);
   }
}
float swap34(float *ptr1,float *ptr2)
{
    float temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
