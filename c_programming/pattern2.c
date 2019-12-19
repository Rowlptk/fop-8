#include<stdio.h>
/*
----*
---***
--*****
-*******
*********


    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
*/
void main()
{
    int i,j;
    for(i=37;i>=33;i--)
    {
        for(j=36;j>=i;j--)
        {
            printf(" ");
        }
        for(j=65;j<=(2*i-1);j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}




