#include <stdio.h>
int main()
{
    int var[]={20,30,40,50};
    int *ip,i;
    ip=&var[0];
    for(i=0;i<=3;i++)
    {
         printf("value of ip %d\n\n",&ip);
        printf("value of ip %d\n\n",*ip);
        ip++;
    }
}
