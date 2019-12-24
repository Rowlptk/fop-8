#include<stdio.h>

void main()
{
    int x[2][2] = {
                    {1,2},
                    {3,4}
                  };
    printf("Before = %d\n",x[1][0]);
    x[1][0] = 9;
    printf("After = %d\n",x[1][0]);
    printf("Change value of x[1][0] to : ");
    scanf("%d",&x[1][0]);
    printf("Changed to = %d\n",x[1][0]);
}
