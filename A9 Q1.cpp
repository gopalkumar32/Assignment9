#include<stdio.h>
int main()
{
        int n;
        printf("Entre the number\n");
        scanf("%d",&n);
        switch (n)
        {
                case 1||3||5||7||8||10||12 :
                printf("31 day in this month\n");
                break;
                case 2:
                printf("28 or 29 day in this month\n");
                break;
                default :
                printf("30 day in this month\n");
        }
}
