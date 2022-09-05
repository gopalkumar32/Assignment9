#include<stdio.h>
int main()
{
        float unit,amount=0,total=0;
        printf("Entre the unit\n");
        scanf("%f",&unit);
        switch(unit<=50)
        {
        case 1:
        amount=unit*0.50;
        break;
        case 0:
               switch(unit<=150)
               {
                       case 1:
               amount=25+(unit-50)*0.75;
               break;
               case 0:
               switch(unit<=250)
               {
                       case 1:
                       amount=100+(unit-150)*1.25;
                       case 0:
                       amount=220+(unit-250)*1,50;
               }break;
               }break;
        }
        total=amount+amount*20/100;
        printf("your electrical bill %f",total);
        
}
