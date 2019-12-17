// challenge

// pattern ==> nested for;

/*output:
    Enter a number: 17

    17 is a Prime number
*/
void main()
{
    int n,i;
    int flag = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is a prime number ",n);
    }
    else
    {
        printf("Not prime!");
    }
}















/*
15

2-14

15%2
15%3

2-16
17%2
17%3
17%4
17%5
17%6
17%7
17%8
17%9
17%10
17%11
*/

