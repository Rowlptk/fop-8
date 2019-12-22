#include<stdio.h>

void main()
{
    int ary[10],i;
    printf("Enter 10 value : \n");
    for(i=0;i<=9;i++)
    {
        printf("ary[%d] = ",i);
        scanf("%d",&ary[i]);
    }
    // even numbers filter
    printf("\nArray values are : \n");
    for(i=0;i<=9;i++)
    {
        printf("value %d is %d\n",(i+1),ary[i]);
    }

    printf("\nEven Numbers are: \n");
    for(i=0;i<=9;i++)
    {
        if(ary[i]%2 == 0)
        {
            printf("%d\n",ary[i]);
        }
    }
// array with six elements, float, max value
    printf("\nOdd Numbers are: \n");
    for(i=0;i<=9;i++)
    {
        if(ary[i]%2 != 0)
        {
            printf("%d\n",ary[i]);
        }
    }

}
