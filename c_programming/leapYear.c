#include<stdio.h>
void main()
{
    int y;
    printf("Enter a year : ");
    scanf("%d",&y);
    if((y%400==0)||((y%4==0) && (y%100 !=0)))
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
}


y ==>1000 to 9999
m ==> 1 to 12
d ==> 1 to 30

using nested if











