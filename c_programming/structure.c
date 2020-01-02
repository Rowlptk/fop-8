#include<stdio.h>

struct library
{
    char name[50];
    float price;
    int pages;
    char block;
}b1,b2;


void main()
{
    //struct library x,y;
    printf("Enter book 1 name : ");
    gets(b1.name);
    printf("Enter book 1 price : ");
    scanf("%f",&b1.price);
    printf("Enter book 1 pages : ");
    scanf("%d",&b1.pages);
    printf("Enter book 1 block : ");
    scanf(" %c",&b1.block);


    printf("*********** Book 1 ************* ");
    printf("\nName = %s\nPrice = %.2f\nPages = %d\nBlock = %c\n",b1.name,b1.price,b1.pages,b1.block);
    printf("********************************");
}




