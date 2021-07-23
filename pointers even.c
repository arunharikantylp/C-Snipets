#include<stdio.h>
void count(int n,int *ec,int *oc);
int main()
{
    int n,oc=0,ec=0;
    printf("Enter the value if n\t");
    scanf("%d",n);
    count(n,&ec,&oc);
    printf("odd count=%d",oc);
    printf("even count=%d",ec);
}
void count(int n,int *ec,int *oc)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            *ec=*ec+1;
        }
        else
        {
            *oc=*oc+1;
        }
    }
}
