#include<stdio.h>
#include<string.h>
int pal(char s[]);
int main()
{
    char s[20];
    int res;
    printf("Enter the string \t\n");
    gets(s);
    res=pal(s);
    if(res==0)
    {printf("palindrome");}
    else
        {printf("not");}
}
int pal(char s[])
{
    int len=strlen(s);
    int l=0,h=len-1,flag=0;
    while(s[l]!=s[h])
    {
        flag=1;
        l++;
        h--;
    }
    return flag;
}
