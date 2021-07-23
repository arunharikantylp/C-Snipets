#include<stdio.h>
int main()
{
    int bs;
    int HRA,DA,TA,gs;
    printf("enter the basic salary ");
    scanf("%d",&bs);
    if ( bs<25000 )
    {
        n=1;
    }
    else
    {switch(n)
    case 1:     if(bs<25000)
      {HRA=5.0/100*bs;
        DA=20.0/100*bs;
        TA=10.0/100*bs;
        gs=HRA+DA+TA+bs;

      }
     else if(bs>25000 && bs<40000)
     {
         HRA=10.0/100*bs;
         DA=30.0/100*bs;
         TA=15.0/100*bs;
         gs=HRA+DA+TA+bs;

     }
      else if(bs>40000 && bs<50000)
      {
          HRA=15.0/100*bs;
         DA=40.0/100*bs;
         TA=20.0/100*bs;
         gs=HRA+DA+TA+bs;
  }
      else if(bs>50000)
      {
          HRA=20.0/100*bs;
         DA=50.0/100*bs;
         TA=25.0/100*bs;
         gs=HRA+DA+TA+bs;
      }
     {
        printf("gross salary=%d",gs);
     }
}
}
