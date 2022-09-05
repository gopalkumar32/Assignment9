#include<stdio.h>
#include<stdlib.h>
int main()
{
        int choice,a,b;
        while(1)
        {
                printf("1.Addition\n");
                printf("2.Subbtraction\n");
                printf("3.Multiplicatin\n");
                printf("4. Division\n");
                printf("5. exit\n");
                printf("Entre you choice\n");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                        scanf("%d%d",&a,&b);
                        printf("sum of two number is %d",a+b);
                        break;
                        case 2:
                        scanf("%d%d",&a,&b);
                        printf("Subtration of two number is %d",a-b);
                        break;
                        case 3:
                        scanf("%d%d",&a,&b);
                        printf("Multipliction of two number is %d",a*b);
                        break;
                        case 4:
                        scanf("%d%d",&a,&b);
                        printf("Division of two number is %d ",a/b);
                        case 5:
                        exit(0);
                }

        }
}
