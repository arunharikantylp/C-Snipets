#include<stdio.h>
int main()
{
     int a;
     printf("enter the number");
     scanf("%d",&a);
     switch(a%2)
     {case 0:printf("number is even");
     break;
     case 1:printf("number is odd");
     break;
     default:printf("invalid input");
     break;



     }






}
