#include<stdio.h>
int main()
{
    int n,reminder,rev=0,temp;
    printf("Enter the number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        reminder=n%10;
        rev=rev*10+reminder;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("Number is palindrome\n");
    }
    else
    {
        printf("Number is not palindrome");

    }
}



