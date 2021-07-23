/*name of program:find total number of currency
 name of author:Arun
 date:31/08/2018
 */
#include<stdio.h>
int main()
{int amt;
printf("enter amount");
scanf("%d",&amt);

printf("hundreds=%d\n",amt/100);
amt=amt%100;
printf("fiftes=%d\n",amt/50);
amt=amt%50;
printf("tens=%d\n",amt/10);
amt=amt%10;
printf("fives=%d\n",amt/5);
amt=amt%5;
printf("twos=%d\n",amt/2);
amt=amt%2;
printf("ones=%d\n",amt/1);
}
