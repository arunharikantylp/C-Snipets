#include <stdio.h>
int main()
{
    int var[]={10,100,200};
    int i,*ip;
    ip=&var[0];
    for(i=0;i<3;i++)
    {
        printf("value of ip %d\n\n",&ip);
        printf("value of ip %d\n\n",*ip);
        ip++;
    }
}
