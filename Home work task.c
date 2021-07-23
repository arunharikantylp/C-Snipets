#include<stdio.h>
int main()

{
    int w;
    printf("Enter the wieght of a boxer");
    scanf("%d",&w);

    if(w<115)
    {
        printf("Fly weight");
    }
    else if(w>=115 && w<=121)
    {
        printf("Bantam weight ");
    }
    else if(w>=122 && w<=153)
    {
        printf("Feather weight");
    }
    else if(w>=154 && w<=189)
    {
        printf("Middle weight");
    }
    else
   {
       printf("Heavy weight");
   }

}
