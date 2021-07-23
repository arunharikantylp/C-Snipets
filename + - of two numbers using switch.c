#include<stdio.h>
int main()
{
      int num1,num2,result;
      char ch;
       printf("enter the operator");
      scanf("%c",&ch);
      printf("enter the two numbers");
      scanf("%d%d",&num1,&num2);
      switch(ch)
      {
           case'+':result=num1+num2;
           break;
           case'-':result=num1-num2;
           break;
           case'/':if (num2==0)
                    {printf("infinity");
                    }
                    else
                    {       result=num1/num2;
                    }
                        break;
            default:printf("invalid input");
            break;
            }
            printf("the result=%d",result);



}
