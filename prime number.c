#include<stdio.h>
int main()
{
    int i,num,flag=0;
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d is composite number\n",num);
    }
    else
    {
        printf("%d is prime number\n",num);
    }
    return 0;
}
