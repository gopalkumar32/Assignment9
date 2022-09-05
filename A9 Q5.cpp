#include<stdio.h>
int main()
{
        int n;
        printf("Entre the number\n");
        scanf("%d",&n);
        switch (n)
        {
                case 1:
                printf("good\n");
                break;
                case 2:
                printf("Better\n");
                break;
                case 3:
                printf("Best\n");
                break;
                default:
                printf("Invalid\n");
        }
}
