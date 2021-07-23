#include<stdio.h>
int main()
{
    int num,zero,one,i,rem;
    scanf("%d",&num);
    zero=1;
    one=0;
    for(i=1;i<=num;i++)
    {
        rem=num%10;

        if(rem==1)
            one++;
        else
            zero++;
            num=num/10;
    }
    printf("%d one\n",zero);
    printf("%d zero\n",one);
}
