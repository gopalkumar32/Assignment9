#include<stdio.h>
int main()
{
        int num;
        printf("Entre the number\n");
        scanf("%d",&num);
        switch(num>0)
        {
                case 1:
                printf("%d",-num);
                break;
                case 0:
                printf("%d",-num);
        }
}
