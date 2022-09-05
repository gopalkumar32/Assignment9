#include<stdio.h>
#include<stdlib.h>
int main()
{
        int a,b,c,choice;
        while(1)
        {
                printf("1. isosceles triangle\n");
                printf("2. Right angle triangle\n");
                printf("3. Equalateral triangle\n");
                printf("4. exit\n");
                printf("Entre your choice\n");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                        printf("Entre the side of triangle\n");
                        scanf("%d%d%d",&a,&b,&c);
                        if(((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(b!=a)))
                        printf("isosceles triangle\n");
                        else
                        printf("Not isosceles triangle\n");
                          case 2:
                          printf("Entre the side of triangle\n");
                          scanf("%d%d%d",&a,&b,&c);
                          if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
                          printf("Right angle triangle\n");
                          else
                          printf("Not right angle triangle");
                          case 3:
                          printf("Entre the side of triangle\n");
                          scanf("%d%d%d",&a,&b,&c);
                          if(a==b&&a==c)
                          printf("Equaliteral triangle\n");
                          else
                          printf("Not equaliteral triangle\n");
                          case 4:
                          exit(0);
                          
                }
        }
}
