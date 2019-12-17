#include<stdio.h>
// 40 to 90 ==> even,
// generate prime from 1 to 100(assignment)
void main()
{
    int i,n,m;
    printf("Kun Wanza? ");
    scanf("%d",&n);
    printf("Start Point : ");
    scanf("%d",&i);
    printf("Final Point : ");
    scanf("%d",&m);
    for(i;i<=m;i++)
    {
        printf("%d x %d = %d\n",n,i,(n*i));
    }
}
