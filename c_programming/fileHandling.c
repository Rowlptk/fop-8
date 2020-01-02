#include<stdio.h>
// w, a, r
void main()
{
    FILE *fp;
    char temp[50],temp1[50];
    // write

    //fp = fopen("demo.txt","w");
    //fp = fopen("demo.txt","a");
    //fprintf(fp,"Apple");
    //fprintf(fp,"Mango");
    //fprintf(fp,"Apple");
    //fprintf(fp,"\nCherry");

    // Read
    fp = fopen("demo.txt","r");

    if(fp == NULL)
    {
        printf("File Not Found!");
        exit(0);
    }
    fscanf(fp,"%s%s",temp,temp1);
    printf("%s %s",temp,temp1);

    fclose(fp);
}




