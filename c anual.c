#include<stdio.h>
void readarray(int a[],int n);
void printarray(int a[],int n);
void binary(int a[50],int n);
int main()
{
    int a[50],n,element;
    printf("Enter the value of n");
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    binary(a,n);
}
void readarray(int a[50],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void printarray(int a[50],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
void binary(int a[50],int n)
{

  int sum,i,j,flag=0;
  printf("Enter the sum");
  scanf("%d",&sum);
  for(i=0;i<n;i++)
  {
      for(j=i;j<n;j++)
      {
          if((a[i]+a[j])==sum)
          {
                    printf("\n(%d,%d) with sum %d",a[i],a[j],sum);

          }
      }
  }


}


