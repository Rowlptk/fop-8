#include<stdio.h>

void main()
{
    float n1,n2;
    char ch;
    printf("Enter First Number : ");
    scanf("%f",&n1);
    printf("Enter Second Number : ");
    scanf("%f",&n2);
    system("cls");
    printf("Options:\nPress + to Add\nPress - to Subtract\nPress * to Multiply\nPress / to Divide\n  Select : ");
    scanf(" %c",&ch);
    system("cls");
    switch(ch)
    {
    case '+':
        printf("%.2f + %.2f = %.2f",n1,n2,(n1+n2));
        break;
    case '-':
        printf("%.2f - %.2f = %.2f",n1,n2,(n1-n2));
        break;
    case '*':
        printf("%.2f * %.2f = %.2f",n1,n2,(n1*n2));
        break;
    case '/':
        printf("%.2f / %.2f = %.2f",n1,n2,(n1/n2));
        break;
    default:
        printf("See you soon! Idiot!");
    }
}
