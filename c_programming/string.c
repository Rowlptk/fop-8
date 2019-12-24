/*string is collection of character

char ch = 'A';
char ch[10] = A p p l e \0         ===> string ==> character string
              _ _ _ _ _ _ _ _ _ _
              0 1 2 3 4 5 6 7 8 9
*/
// paragraph store string ==> 1000
//hint ==> loop ==> character by character`
#include<stdio.h>
// string functions ==> string.h
// Login ==> multiple ==> attempt
void main()
{
    char str[50] = "Apple";
    char ch;
    printf("The string is : %s",str);
    printf("\nChange Apple to : ");
    //scanf("%s",str);
    gets(str);
    printf("Apple Changed to : %s\n",str);
    puts(str);
    printf("\n");
    ch = getchar();
    putchar(ch);

}
