#include<stdio.h>
int main()
{ int n,year;
    printf("enter the months");
    scanf("%d",&n);
    printf("enter the year");
    scanf("%d",&year);
    switch(n)
{case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:printf("no.of days is 31");
break;
case 2:if(year%400==0)
     {  printf("display 28 days");}
     else if(year%100==0)
     {printf("display 29 days");}
     else if(year%4==0)
    { printf("display 28 days");}
    else
    {printf("display 29 days");}
    break;
default:printf("no.of days is 30");
break;


}
}
