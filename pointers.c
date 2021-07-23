#include <stdio.h>
int main()
{char var ='a';
char *ip;
ip=&var;
printf("adress of var variable :%d\n",&var);
printf("adress stored in ip variable: %d\n",ip);
printf("value of *ip variable: %c\n",*ip);
printf("adrees of ip pointer :%d\n",&ip);
printf("value of var %c",var);
}
