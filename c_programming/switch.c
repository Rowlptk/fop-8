/*switch .. case*/

#include<stdio.h>

void main()
{
    int n;
    printf("Choose: \n1.Unlimited Pack@Rs.22@1hr.\n2.20mb@Rs.10\n3.1GB@Rs.500\nSelect: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Your unlimited pack is activated!");
        break;
    case 5:
    case 2:
        printf("Your 20mb data pack is activated!");
        break;
    case 3:
        printf("Your 1GB data pack is activated!");
        break;
    default:
        printf("Invalid Option!");
    }
}
