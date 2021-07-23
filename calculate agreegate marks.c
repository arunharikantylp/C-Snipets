/*name of program:calculate agreegate marks
 name of author:Arun
 date:31/08/2018
 */
#include<stdio.h>
int main()
{int m1,m2,m3,m4,m5;
int agg;
float avg;
printf("enter marks of 5 subjects");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
agg=m1+m2+m3+m4+m5;
avg=agg/5.0;
printf("aggregate=%d\n",agg);
printf("avg=%.2f%%\n",avg);
}
