#include<stdio.h>
int main()
{
    int H,T;
    float C;

    printf("enter the value of hardness");
    scanf("%d",&H);

    printf("enter the content of carbon");
    scanf("%f",&C);

    printf("enter the tensile strength");
    scanf("%d",&T);

    if(H>50 && C<0.7 && T>5600)
    {printf("grade 10");}

       else if(H>50 && C<0.7 && T<5600)
   {
       printf("grade 9");
   }
    else if(H<50 && C<0.7 && T>5600)
   {
       printf("grade 8");
   }
        else if(H>50 && C>0.7 && T>5600)
        {
            printf("grade 7");
        }
else if(H>50 || C<0.7 || T>5600)
{
    printf("grade 6");
}
else
{
    printf("grade 5");
}
}
