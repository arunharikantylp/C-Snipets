#include<stdio.h>
int main()
{
    int i=1,p;
    float t,r,interest;
     printf("p\n");
        scanf("%d",&p);
         printf("t\n");
        scanf("%f",&t);
         printf("r\n");
        scanf("%f",&r);

    for(i=1;i<=15;i++)
    {

        interest=(p*t*r)/100;


    printf("%f\n",interest);
    }
}
