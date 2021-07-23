#include<stdio.h>
main()
{
float km,cm,m,inch,feet;
printf("Enter distance in kms");
scanf("%f",&km);
m=km*1000.0;
cm=m*100.0;
inch=cm/2.54;
feet=inch/12.0;
printf("meters=%f\n",m);
printf("centimeters=%f\n",cm);
printf("inches=%f\n",inch);
printf("feet=%f\n",feet);


}
