 #include<stdio.h>
int main()
{
       char v;
       int a_hours,d_hours,hours,minutes,a_minutes,d_minutes;
       float total_hours,charge;

       printf("enter the type of vehicle\t");
       scanf("%c",&v);

       printf("enter the arrival time in hours\t");
       scanf("%d",&a_hours);

       printf("enter the arrival time in minutes\t");
       scanf("%d",&d_minutes);

        printf("enter the departure time in hours\t");
       scanf("%d",&d_hours);

        printf("enter the departure time in minutes\t");
       scanf("%d",&d_minutes);

        minutes=d_minutes-a_minutes;
        //printf("%d\t",minutes);
        hours=d_hours-a_hours;

        total_hours=hours+(float)minutes/60;
        //printf("&f\t",total_hours);

        if(v=='f'&& total_hours<=8)
        {
        charge=20*total_hours;
        printf("total charge=%f rupees",charge);
        }

        else if(v=='f' && total_hours>8)
        {
            charge=20*8+(total_hours-8)*30;
            printf("total charge=5f rupees",charge);

        }
        else if(v=='t' && total_hours<=8)
        {
            charge=20*total_hours;
            printf("total charge=%f rupees",charge);
        }
        else if(v=='t' && total_hours>8)
        {
            charge=10*8+(total_hours-8)*20;
            printf("total charge=%f rupees",charge);
        }
        else
        {
            printf("invalid choice");
        }
}
