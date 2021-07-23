/*name of the program-find a gross salary of a employee
 author name-Arun
 date-25/09/2018*/

 #include<stdio.h>
 int main()
 {   int bs;
    float HRA,DA,TA,gs;
     printf("Enter the basic salary of an employee");
     scanf("%d",&bs);
     if(bs<25000)
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
      printf("gross salary=%f",gs);
 }

