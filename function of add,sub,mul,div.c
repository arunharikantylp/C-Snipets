#include<stdio.h>
void add(int a,int b);
void sub (int a,int b);
void multi(int a,int b);
void div(int a,int b);
int main()
{
    int a,b,ch;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    printf("1 for addition\n 2 for sub\n 3 for multi\n 4 for division\n");
    scanf("%d",&ch);
    switch(ch)


    {

        case 1:add(a,b);
        break;
         case 2:sub(a,b);
        break;
         case 3:multi(a,b);
        break;
         case 4:div(a,b);
        break;

    }
}
    void add(int a,int b)
    {
        int s;
        s=a+b;
        printf("%d",s);
    }
     void sub(int a,int b)
    {
        int s;
        s=a-b;
        printf("%d",s);
    }
     void multi(int a,int b)
    {
        int s;
        s=a*b;
        printf("%d",s);
    }
     void div(int a,int b)
    {
        int s;
        s=a/b;
        printf("%d",s);
    }

