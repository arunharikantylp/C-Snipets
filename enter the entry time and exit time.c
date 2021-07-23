#include<stdio.h>
int main()
{float PT,ET,et;
char v;
printf("enter the vehicle");
scanf("%c*c",&v);
printf("enter the entry time and exit time");
scanf("%f%f",&ET,&et);
PT=ET-et;
if(PT<=8)
{
    printf("rate=20 Rs.");
}
else
{
    printf("rate=30 Rs.");
}

}
