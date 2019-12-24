#include<stdio.h>

void main()
{
    int m1[3][3], m2[3][3],i,j;
    printf("Matrix 1 : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("m1[%d][%d] = ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Matrix 2 : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("m2[%d][%d] = ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    printf("Addition of m1 and m2 : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",m1[i][j]+m2[i][j]);
        }
        printf("\n");
    }
}
