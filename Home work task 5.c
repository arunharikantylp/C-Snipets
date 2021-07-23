#include<stdio.h>
int main()

{   int n;
    float tax;
    printf("Enter the income");
    scanf("%d",&n);

    if(n<150000)
    {
        printf("NO TAX");
    }
    else if(n>=150001 && n<=300000)
    {
        tax=(n-150000)*10.0/100;
        printf("%f",tax);
    }
    else if(n>=300001 && n<=500000)
    {
        tax=(n-150000)*20.0/100;
        printf("%f",tax);
    }
    else
    {
        tax=(n-150000)*30.0/100;
        printf("%f",tax);
    }
}
