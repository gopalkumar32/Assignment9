#include<stdio.h>
int main()
{
        int num;
        printf("Entre the number\n");
        scanf("%d",&num);
        switch(num%2==0)
        {
                case 1:
                printf("%d",num+1);
                break;
                case 0:
                printf("%d",num);
        }
}
