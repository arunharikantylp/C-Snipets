#include<stdio.h>
int main()
{      int n,res,rad,b,h,l,w;
    printf("press 1,2,3");
    scanf("%d",&n);
    switch(n)
    {case 1:
            printf("enter the radius");
            scanf("%d",&rad);
            res=3.14*rad*rad;
            printf("result=%d",res);
            break;
     case 2:
            printf("enter the base and height");
            scanf("%d%d",&b,&h);
            res=0.5*b*h;
            printf("result=%d",res);
            break;
    case 3:
          printf("enter the length and width");
            scanf("%d%d",&l,&w);
            res=l*w;
            printf("result=%d",res);
            break;
     default:printf("invalid input");
            break;



    }



}
