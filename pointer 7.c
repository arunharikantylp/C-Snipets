#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a=10,b=20;
    printf("a=%d,b=%d\n\n",a,b);
    swap(a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
     printf("a=%d,b=%d",a,b);
}

