#include<stdio.h>
int main()
{
    int bs;
    float HRA,DA,TA,GS;
    printf("enter the basic salary as 1 2 3 4 ");
    scanf("%d",&bs);
    {switch(bs)
    case(1):HRA=5.0/100*bs;
                   DA=20.0/100*bs;
                   TA=10.0/100*bs;
                   gs=HRA+DA+TA+bs;
                   break;

     case(2):HRA=10.0/100*bs;
                                DA=30.0/100*bs;
                                TA=15.0/100*bs;
                                gs=HRA+DA+TA+bs;
                                break;

    case(3): HRA=15.0/100*bs;
                                DA=40.0/100*bs;
                                TA=20.0/100*bs;
                                gs=HRA+DA+TA+bs;
                                break;

    case(4):   HRA=20.0/100*bs;
                      DA=50.0/100*bs;
                      TA=25.0/100*bs;
                      gs=HRA+DA+TA+bs;
                      break;
     default:printf("invalid input");
            break;
}
      printf("gross salary=%f",gs);

}
