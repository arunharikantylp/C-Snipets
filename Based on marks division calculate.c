#include<stdio.h>
int main()
{
        int s1,s2,s3,s4,s5,sum;
        float p;
        printf("enter the marks of five subjects");
        scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
       sum=s1+s2+s3+s4+s5;
       p=sum*100/500.0;
       printf("sum=%d\n",sum);
       printf("percentage=%f\n",p);
        if(p>=60)
       { printf("first division");
        }
        else if(p>=50&&p<=59)
        {printf("second division");
        }
        else if(p>=40&&p<=49)
        {printf("third division");
        }
        else
        {printf("fail");
        }
}
