//3 function ==> add sub mul

#include<stdio.h>

void menu();
void add(float x, float y);
void subtract(float x, float y);
void multiply(float x, float y);

void main()
{
    menu();
}

void menu()
{
    float n1,n2;
    int n;
    printf("Enter two numbers : ");
    scanf("%f%f",&n1,&n2);
    printf("Options: \n1.Add\n2.Subtract\n3.Multiply\n  Select: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        add(n1,n2);
        break;
    case 2:
        subtract(n1,n2);
        break;
    case 3:
        multiply(n1,n2);
        break;
    default :
        printf("This Option is Not Available");
    }
}


void add(float x, float y)
{
    printf("%.2f + %.2f = %.2f",x,y,(x+y));
}

void subtract(float x, float y)
{
    printf("%.2f - %.2f = %.2f",x,y,(x-y));
}

void multiply(float x, float y)
{
    printf("%.2f * %.2f = %.2f",x,y,(x*y));
}
