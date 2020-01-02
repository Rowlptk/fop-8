#include<stdio.h>

void write(char name[50], float price, int pages, char block);
void read();

struct library
{
    char name[50];
    float price;
    int pages;
    char block;
}b[10];


void main()
{
    int n,i, flag = 0;
    char temp[50];
    printf("How Many Book Entry You Want To Make : ");
    scanf("%d",&n);
    //struct library x,y;
    getchar();
    for(i=0;i<n;i++)
    {
        printf("Enter book %d name : ",(i+1));
        gets(b[i].name);
        printf("Enter book %d price : ",(i+1));
        scanf("%f",&b[i].price);
        printf("Enter book %d pages : ",(i+1));
        scanf("%d",&b[i].pages);
        printf("Enter book %d block : ",(i+1));
        scanf(" %c",&b[i].block);
        getchar();
        write(b[i].name, b[i].price, b[i].pages, b[i].block);
        printf("\n");
    }

    /*for(i=0;i<n;i++)
    {
        printf("*********** Book %d ************* ",i+1);
        printf("\nName = %s\nPrice = %.2f\nPages = %d\nBlock = %c\n",b[i].name,b[i].price,b[i].pages,b[i].block);
        printf("********************************\n");
    }
    */

    printf("Enter a Book Name to Search : ");
    gets(temp);
    for(i=0;i<n;i++)
    {
        if(strcmp(b[i].name, temp) == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("*********** Book %d ************* ",i+1);
        printf("\nName = %s\nPrice = %.2f\nPages = %d\nBlock = %c\n",b[i].name,b[i].price,b[i].pages,b[i].block);
        printf("********************************\n");
    }
    else
    {
        printf("\nBook Not Found!\n");
    }
}


void write(char name[50], float price, int pages, char block)
{
    FILE *fp;
    fp = fopen("library.txt","a");
    fprintf(fp,"%s\t%.2f\t%d\t%c\n",name,price,pages,block);
    fclose(fp);
}








