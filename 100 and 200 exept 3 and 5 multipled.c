#include<stdio.h>
int main()
{
    int i,num,evensum=0,oddsum=0,rem;
    scanf("%d",num);
    for(i=num;num>0;i=i/10)
        rem=i%10;
        if(rem%2==0)
    {
        evensum=evensum+i;
    }
    else
    {
        oddsum=oddsum+i;
    }
    printf("%d\n",evensum);
    printf("%d\n",oddsum);
}
