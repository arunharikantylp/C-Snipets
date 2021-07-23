#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%3==0)
        {
            printf("%d\t",i);
        }
        i++;
    }
}
