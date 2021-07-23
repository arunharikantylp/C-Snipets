#include<stdio.h>
#define ROW 50
#define COL 50
void readarray(int a[ROW][COL],int m ,int n);
void printarray(int a[ROW][COL],int m ,int n);
void sum(int a[ROW][COL],int m,int n);
int main()
{
    int a[ROW][COL],m,n,T;
    float N;
    printf("Enter the value of m and n;");
    scanf("%d%d",&m,&n);
    printf("\n\nEnter the array values\n\n");
    readarray(a,m,n);
    printarray(a,m,n);
    sum(a,m,n);
}
void readarray(int a[ROW][COL],int m ,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);

        }
    }
}
void printarray(int a[ROW][COL],int m ,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {

        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void sum(int a[ROW][COL],int m,int n)
{
    int i,j,sum=0,hi=0;
    for(i=0;i=m;i++)
    {
        for(j=0;j<n;j++)
        {
          sum=sum+a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j+1]+a[i+2][j+2];
          if(hi<sum)
          {
              hi=sum;
          }
          sum=0;
        }
    }
    printf("sum=%d",hi);
}

