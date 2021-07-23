/*name of program:calculate volume of cylinder
 name of author:Arun
 date:31/08/2018
 */
#include<stdio.h>
int main()
{float rad,h,v;
printf("enter radius and height");
scanf("%f%f",&rad,&h);
v=3.14*rad*rad*h;
printf("volume=%f",v);
}
