#include<stdio.h>

// check number is positive
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Number is Positive ");
    }
    else if(n == 0)
    {
        printf("Number is Zero ");
    }
    else
    {
        printf("Number is negative ");
    }
}
