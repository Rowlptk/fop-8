#include<stdio.h>
void main()
{
    float ary[6],max,min;
    int i;
    printf("Enter six Values: \n");
    for(i=0;i<=5;i++)
    {
        scanf("%f",&ary[i]);
    }

    max = ary[0];
    min = ary[0];
    for(i=0;i<=5;i++)
    {
        if(ary[i] > max)
        {
            max = ary[i];
        }
        if(ary[i] < min)
        {
            min = ary[i];
        }
    }
    printf("The max value in array is %.2f\n",max);
    printf("The min value in array is %.2f",min);

}
