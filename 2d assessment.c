#include<stdio.h>
#define ROW 50
#define COL 50
void readarray(int a[ROW][COL],int m,int n);
void printarray(int a[ROW][COL],int m,int n);
int max_sum(int a[ROW][COL],int m,int n);
int main()
{
    int a[ROW][COL],m,n,ans;
    printf("Enter the value of m;\t");
    scanf("%d",&m);
    printf("Enter the value of n;\t");
    scanf("%d",&n);
    if(m<=0 || n<=0 || m>50 || n>50)
    {
        printf("\tINVALID INPUT");
    }
    else
    {
        readarray(a,m,n);
        printf("Entered array values are\n");
        printarray(a,m,n);
        ans=max_sum(a,m,n);
        printf("\nSUM is %d",ans);
    }
}
void readarray(int a[ROW][COL],int m,int n)
{    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void printarray(int a[ROW][COL],int m,int n)
{   int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int max_sum(int a[ROW][COL],int m,int n)
{   int i,j,sum;
    int max=-9999;
    for(i=0;i<m;i++)
    {    sum=0;
        for(j=0;j<n;j++)
        {
          sum=sum+a[i][j];
        }
    if(sum>max)
    {
        max=sum;
    }
    }
    for(i=0;i<m;i++)
    {   sum=0;
        for(j=0;j<n;j++)
        {
          sum=sum+a[j][i];
        }
    if(sum>max)
    {
        max=sum;
    }
    }
    return max;
    }







