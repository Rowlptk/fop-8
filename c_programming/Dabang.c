#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void login();
void menu();
void checkbalance();
void withdraw();
void deposit();
void proceed();

double tB = 1000;

void main()
{
    login();
}

void proceed()
{
    char ch;
    printf("\nPress Y to continue... ");
    scanf(" %c",&ch);
    system("cls");
    if(ch == 'Y' || ch == 'y')
    {
        menu();
    }
    else
    {
        exit(0);
    }
}

void deposit()
{
    double dA;
    printf("Enter a Deposit Amount : ");
    scanf("%lf",&dA);
    if(dA<=10000)
    {
        //tB = tB + dA;
        tB += dA;
        printf("\nDeposited Amount = $%.2lf\n",dA);
        printf("Total Balance = $%.2lf\n",tB);
    }
    else
    {
        printf("\nAmount Above $10000 Cannot be Deposited!\n");
    }
}


void withdraw()
{
    double wA;
    printf("Enter a Withdraw Amount : ");
    scanf("%lf",&wA);
    if((long int)wA%500 == 0)
    {
        if(wA <= 5000)
        {
            if(wA <= tB)
            {
                //tB = tB-wA;
                tB -= wA;
                printf("\nWithdraw Amount = $%.2lf\n",wA);
                printf("Current Balance = $%.2lf\n",tB);
            }
            else
            {
                printf("\nSorry! You do not have Sufficient Balance!\n");
            }
        }
        else
        {
            printf("\nAmount Exceeds Per Transaction Limit($5000)!\n");
        }
    }
    else
    {
        printf("\nAmount Must Be Multiple Of 500\n");
    }
}

void checkbalance()
{
    printf("\nYour Current Balance is $%.2lf\n",tB);
}

void menu()
{
    int n;
    printf("************ Welcome to Dabbang Bank ************\n");
    printf("\nMenu :\n1.Check Balance\n2.Withdraw\n3.Deposit\n4.Exit\n  Select : ");
    scanf("%d",&n);
    system("cls");
    switch(n)
    {
    case 1:
        //printf("Yaha Balance check Hunxa");
        checkbalance();
        proceed();
        break;
    case 2:
        //printf("withdraw");
        withdraw();
        proceed();
        break;
    case 3:
        //printf("Deposit");
        deposit();
        proceed();
        break;
    case 4:
        //printf("Exit");
        exit(0);
        break;
    default:
        printf("\nInvalid Option!\n");
        proceed();
    }
}

void login()
{
    char user[30], pwd[30];
    printf("Enter Your Username : ");
    gets(user);
    printf("Enter Your Password : ");
    gets(pwd);
    system("cls");
    if((strcmp(user,"admin")==0)&&(strcmp(pwd,"admin")==0))
    {
        //printf("\nWelcome to Dabbang Bank!\n");
        menu();
    }
    else{
        printf("\nUsername or Password is Incorrect!\n");
    }
}
