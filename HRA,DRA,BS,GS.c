#include<stdio.h>
int main()
{
       float bs,hra,da,gs;
       printf("enter a  salary");
       scanf("%f",&bs);
       if(bs<1500)
       {

        da=90.0/100*bs;
       hra=10.0/100*bs;
        gs=bs+hra+da;
       printf("gross=%f",gs);
      }
       else
     {

       da=98.0/100*bs;
       hra=500.0;
        gs=bs+hra+da;
       printf(" gross=%f",gs);
       }
       }




