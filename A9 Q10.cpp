#include<stdio.h>
int main()
{
        int a,b,c;
        printf("Entre the value of a,b,c\n");
        scanf("%d%d%d",&a,&b,&c);
        switch((b*b-4*a*c)>0)
        {
                case 1:
                printf("Root are real\n");
                break;
                case 0:
                switch((b*b-4*a*c)<0)
                {
                        case 1:
                        printf("Root are imginiar\n");
                        break;
                        case 0:
                        printf("Root are equal\n");
                }break;
        }
}
