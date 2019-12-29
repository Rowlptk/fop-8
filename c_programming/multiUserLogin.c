#include<stdio.h>
#include<string.h>
// attempt next class max ==> 3 attempts
// functions ==> return type, parameterized and parameterless function.
// functions, structure, file handling.
void main()
{
    char usr[5][20] = {"admin","ram","shyam","hari","sita"};
    char pwd[5][20] = {"123","ram123","shyam123","hari123","sita123"};
    char usr_in[20], pwd_in[20],temp[20];
    int i,j,flag=0, flag1;
    for(j=1;j<=3;j++)
    {
        printf("Attempt Remaining : %d\n",(4-j));
        printf("Enter your username : ");
        gets(usr_in);
        printf("Enter your password : ");
        gets(pwd_in);
        for(i=0;i<=4;i++)
        {
            strcpy(temp,usr[i]);
            if(strcmp(strlwr(temp),strlwr(usr_in))==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1 && strcmp(pwd[i],pwd_in)==0)
        {
            printf("Success");
            flag1 = 1;
            break;
        }
        else
        {
            printf("Wrong!");
            flag1 = 0;
        }
    }
    if(flag1 == 1)
    {
        printf("Welcome");
    }
    else
    {
        printf("Attempt remaining %d",(4-j));
        printf("Your Account is Locked!");
    }
}




