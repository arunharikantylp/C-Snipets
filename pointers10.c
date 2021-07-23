#include<stdio.h>
int main()
{
    int a[50],i,n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the array values");
    for(i=0;i<n;i++)
        scanf("%d",(a+i));
    printf("Enter values are\n");
    for(i=0;i<n;i++)
        printf("%d\t",*(a+i));
}

