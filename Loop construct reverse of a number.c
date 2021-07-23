#include<stdio.h>
int main()
{
    int i=1,n,reminder;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        reminder=n%10;
        printf("%d\n",reminder);
        n=n/10;
    }
}
