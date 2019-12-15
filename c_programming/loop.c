/*while   ===> entry controlled loop
do ..while ==> exit controlled loop
for ==> entry
*/
#include<stdio.h>

void main()
{
    int i=10;
    while(i>=1)
    {
        printf("Count %d\n",i);
        i--;
    }
}
