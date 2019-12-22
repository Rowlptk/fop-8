#include<stdio.h>

void main()
{
    int ary[5] = {56,98,0,-45,10};
    int ary1[10];
    printf("Before = %d\n",ary[3]);
    ary[3] = 1000;
    printf("After = %d",ary[3]);
    printf("\nEnter first value : ");
    scanf("%d",&ary1[0]);
    printf("First value is = %d",ary1[0]);
}
