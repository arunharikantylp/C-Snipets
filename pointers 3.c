#include <stdio.h>
int main()
{ int var=20;
int *ip;

ip=&var;
printf("adress of variable :%d\n",&var);
printf("adress stored in ip variable: %d\n",ip);
printf("value of *ip variable: %d\n",*ip);
*ip=40;
printf("adrees of b variable :%d\n",&var);
printf("adress stored in ip variable: %d\n",ip);
printf("value of *ip variable: %d\n",*ip);
printf("value of var variable: %d\n",var);
}
