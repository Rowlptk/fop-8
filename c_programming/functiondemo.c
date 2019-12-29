#include<stdio.h>

//function declaration
void add();  // parameter less function
void add1(int x, int y); // parameterized function
int add2(int x, int y);
void main()
{
    //add(); // function call
    //add();
    //add1(34,67);
    int res = add2(33,66);
    printf("Res is %d\n",res);
    printf("the sum is %d",add2(23,77));
}



int add2(int x, int y)
{
    return (x+y);
}

void add1(int x, int y)
{
    printf("%d + %d = %d",x,y,(x+y));
}
// function definition
void add(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n",a,b,(a+b));
}
