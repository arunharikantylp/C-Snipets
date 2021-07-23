#include <stdio.h>
int main()
{ int a=10,b=20,k;
int *i,*j;
i=&a;
j=&b;
k=3*(*j-*i);
printf("value of k is %d",k);
printf("adress of variable :%d\n",&a);
printf("adress stored in i variable: %d\n",i);
printf("value of *i variable: %c\n",*i);
printf("adrees of b variable :%d\n",&b);
printf("adress stored in j variable: %d\n",j);
printf("value of *j variable: %c\n",*j);
printf("value of k variable: %d\n",k);
}
