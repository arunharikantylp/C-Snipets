#include<stdio.h>
void count(int n,int *ecount,int *ocount);
int main()
{
    int n,ocount=0,ecount=0;
    printf("Enter the value if n\t");
    scanf("%d",n);
    count(n,&ecount,&ocount);
    printf("odd count=%d",ocount);
    printf("even count=%d",ecount);
}
void count(int n,int *ecount,int *ocount)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            *ecount=*ecount+1;
        }
        else
        {
            *ocount=*ocount+1;
        }
    }
}
