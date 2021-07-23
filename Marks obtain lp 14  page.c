#include<stdio.h>
int main()
{
    int m,p,c,t,mp;
    printf("enter the marks in  subjects");
    scanf("%d%d%d",&m,&p,&c);
    mp=m+p;
    t=m+p+c;
    if((m>=60 && p>=50 && c>=40) && ((t>200) || mp>=150))
    {
        printf("list the eligible candidate");
    }
    else
    {
        printf("not list the eligible candidate");
    }
}
