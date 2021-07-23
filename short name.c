#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20],s3[20],res[20];
    printf("Enter the sring 1\t\n");
    gets(s1);
    printf("Enter the sring 2\t\n");
    gets(s2);
    printf("Enter the sring 3\t\n");
    gets(s3);
    res[0]=s1[0];
    res[1]=s2[0];
    res[2]=s3[0];


    printf("Entered string is %s\n",res);



}

