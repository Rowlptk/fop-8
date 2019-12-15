#include<stdio.h>

void main()
{
    int y,m,d;
    printf("Enter a Date [yyyy-mm-dd] : ");
    scanf("%d-%d-%d",&y,&m,&d);
    printf("Year = %d\nMonth = %d\nDay = %d",y,m,d);
    if(y>=1000 && y<=9999)
    {
        if(m>=1 && m<=12)
        {
            if(d>=1 && d<=30)
            {
                printf("Date is Valid!")
            }
            else
            {
                printf("Day is invalid!");
            }
        }
        else
        {
            printf("\nMonth is invalid!");
        }
    }
    else
    {
        printf("\nYear is invalid!");
    }
}
1-31 1,3,5,7,8,10,12
1-30 4,6,9,11
1-28 2 normal
1-29 2 leap

1. jan = 31
2. feb = 28 / 29(leap)
3. mar = 31
4. apr = 30
5. may = 31
6. jun = 30
7. jul = 31
8. aug = 31
9. sep = 30
10. oct = 31
11. nov = 30
12. dec = 31


