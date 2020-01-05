#include<stdio.h>
#define PI 3.1415

// Account Create ==> username, email, dob, password, gender, Qualification
// diameter ==> radius, area, perimeter
// file ma store
void write(int a);
int read();

void main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    n = n + read();
    printf("Total Sum is %d",n);
    write(n);
}

void write(int a)
{
    FILE *fp;
    fp = fopen("math.txt","a");
    fprintf(fp,"\n%d",a);
    fclose(fp);
}


int read()
{
    FILE *fp;
    int x;
    fp = fopen("math.txt","r");
    if(fp == NULL)
    {
        printf("File Not Found!");
        exit(0);
    }
    while(fscanf(fp,"%d",&x)==1);
    fclose(fp);
    return x;
}
