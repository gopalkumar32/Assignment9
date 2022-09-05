#include<stdio.h>
int main()
{
        int year;
      printf("Entre the year\n");
      scanf("%d",&year);
      switch(year%4==0)
      {
              case 1:
              printf("leap year\n");
              break;
              case 0:
              printf("Not leap year\n");
      }
}
