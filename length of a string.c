#include<stdio.h>
#include<string.h>
int length(char s[]);
int main()
{
    char s[20],L;
    printf("Enter the string \t\n");
    gets(s);
    L=length(s);
    printf("Result=%d",L);
}
int length(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}
