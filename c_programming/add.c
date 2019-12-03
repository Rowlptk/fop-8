#include<stdio.h>

//2  + 3  = 5
//x  + y  = sum
//printf("%d + %d = %d",x,y,sum);
// scanf() ==> & ==> address of x
int main()
{
    int x, y; // variable declaration
    //x = 2;
    //y = 3;
    //printf("Enter first number : ");
    //scanf("%d",&x);
    //printf("Enter second number : ");
    //scanf("%d",&y);

    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);

    //sum = x + y;

    printf("The sum is %d",(x + y));
    printf("\n%d + %d = %d",x,y,(x + y));
    return 0;
}

//sum,dif,mul;
