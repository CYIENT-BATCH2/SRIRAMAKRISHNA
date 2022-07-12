#include <stdio.h>
int main()
{
    char ch;
   printf("enter the input:\n");
   scanf("%c",&ch);
   (((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))?printf("Alphabet"):printf("Non Alphabet");
}
