#include<stdio.h>
two matrix (3x3) fill ==> add ==> display

2 3   3 4     5 7
4 5   5 6     9 11

void main()
{
    int m[3][3],i,j;
    printf("Fill 3x3 Matrix: \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("m[%d][%d] = ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("The values of 3x3 matrix are : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose 3x3 matrix are : \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",m[j][i]);
        }
        printf("\n");
    }


}
