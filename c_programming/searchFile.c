#include<stdio.h>

void main()
{
    FILE *fp;
    char str[100],temp[100];
    int count = 1, flag = 0;
    fp = fopen("string.txt","r");
    if(fp == NULL)
    {
        printf("File Not Found!");
        exit(0);
    }
    printf("Enter a string You want to search : ");
    gets(temp);
    while(fscanf(fp,"%s",str)==1){
         if(strcmp(str,temp)==0)
         {
             flag = 1;
           //printf("This text is found!");
           break;
         }
         count++;
         //puts(str);
    }
    if(flag == 1)
    {
        printf("%s is found at position %d",temp,count);
    }
    else
    {
        printf("Text Not found!");
    }


}
