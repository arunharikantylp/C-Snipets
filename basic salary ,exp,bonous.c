#include<stdio.h>
int main()
{
   int type,bs,exp;
   float bonous;
   printf("welcome to cloud solution");

   printf("enter the category type\t");
   scanf("%d",&type);

   printf("enter the basic salary");
   scanf("%d",&bs);

   printf("enter the experience");
   scanf("%d",&exp);

   switch(type)
 {
     case 1: if(exp>=1 && exp<=4)
          printf("no bonous");

        else if(exp>=5 && exp<=7)
        {
            bonous=bs*10/100;
             printf("%d",bonous);
        }
        else if(exp>=8)
        {
            bonous=bs*20/100;
             printf("%d",bonous);
        }

   case 2: if(exp>=1 && exp<=4)
         {
             bonous=bs*5/100;
            printf("%d",bonous);
          }
        else if(exp>=5 && exp<=7)
        {
            bonous=bs*15/100;
            printf("%d",bonous);
        }
        else if(exp>=8)
        {
            bonous=bs*25/100;
            printf("%d",bonous);
        }

}}

