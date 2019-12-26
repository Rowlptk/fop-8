#include<stdio.h>
#include<string.h>

void main()
{
    char usr[50] = "AdMin";
    char pwd[50] = "123";
    char usr_in[50],pwd_in[50],temp[50];
    printf("Enter your username : ");
    gets(usr_in);
    printf("Enter your password : ");
    gets(pwd_in);
    strcpy(temp,usr);
    if((strcmp(strlwr(temp),strlwr(usr_in))==0)&&(strcmp(pwd,pwd_in)==0))
    {
        printf("Welcome to your account %s\n",usr_in);
    }
    else
    {
        printf("username or password is incorrect!");
    }
}
