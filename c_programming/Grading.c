/*80-100 ==> A
60-79 ==> B
40-59 ==> C
0-39 ==> F
0-, 100+ ==> invalid marks

(marks>=80 && marks <=100)
*/
#include<stdio.h>

void main()
{
    int m;
    printf("Enter Your Marks : ");
    scanf("%d",&m);
    if(m>=80 && m<=100)
    {
        printf("Congratulations! You got Grade A!");
    }
    else if(m>=60 && m<80)
    {
        printf("Grade B!");
    }
    else if(m>=40 && m<60)
    {
        printf("Grade C!");
    }
    else if(m>=0 && m<40)
    {
        printf("Sorry!, You Failed!");
    }
    else
    {
        printf("This mark does not exist");
    }
}

//check whether a number is even or odd.

//n%2 == 0










