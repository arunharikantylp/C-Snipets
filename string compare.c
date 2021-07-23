#include<stdio.h>
#include<string.h>
int comp(char a[],char b[]);
int main()
{
    char s1[20],s2[20];
    int res;
    printf("Enter the string 1\t\n");
    gets(s1);
    printf("Enter the string 2\t\n");
    gets(s2);
    res=comp(s1,s2);
    printf("Result=%d",res);
    if(res==0)
    {
        printf("\n\nTwo strings are same\n");
    }
    else
    {
        printf("\n\nNot same");
    }

   }
   int comp(char a[],char b[])
   {
       int len1,len2,flag=0,diff,i;
       len1=strlen(a);
       len2=strlen(b);
       if(len1>len2)
        return 1;
       else if(len1<len2)
        return -1;
        else
        {
            for(i=0;i<len1;i++)
            {
                if(a[i]!=b[i])
                {    flag=1;
                    diff=a[i]-b[i];
                    break;
                }

            }
            if(flag==0)
                return 0;
            else if(diff>0)
                return 1;
            else
                return -1;
        }

   }


