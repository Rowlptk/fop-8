#include<stdio.h>

void main()
{
    float n1,n2;
    printf("Enter First number : ");
    scanf("%f",&n1);
    while(n1<0)
    {
        printf("please enter positive number only : ");
        scanf("%f",&n1);
    }

    printf("\nEnter Second number : ");
    scanf("%f",&n2);
    while(n2<0)
    {
        printf("please enter positive number only : ");
        scanf("%f",&n2);
    }

    printf("\n\n%.2f + %.2f = %.2f\n",n1,n2,(n1+n2));

}
