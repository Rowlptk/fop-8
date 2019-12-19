/*ASCII ==> American Standard Code for Information Interchange

character encoding method ==> 0 to 255

A-Z ==> 65-90

a-z ==> 97-122
*/

#include<stdio.h>
void main()
{
    char ch = 'A';
    int x = 90,i;

    // typecasting
    printf("%d\n",ch);
    printf("%c\n",x);

    for(i=0;i<=255;i++)
    {
        printf("%d = %c\n",i,i);
    }
}
