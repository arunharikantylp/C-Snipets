#include<stdio.h>
int main()
{char sex,ms;
int age;
printf("enter age,sex,marital status");
scanf("%d %c %c",&age, &sex, &ms);
if((ms=='M')||(ms=='u'&&sex=='m'&&age>30)||(ms=='u'&&sex=='f'&&age>25))
   {
       printf("driver is insured");
       }
    else
       {
           printf("driver is not insured");
       }

}
