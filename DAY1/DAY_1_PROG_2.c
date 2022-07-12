#include <stdio.h>
int main() 
{
    char ch;
    printf("enter a character:\n");
    scanf("%c",&ch);
    if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
    {
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
    printf("vowel");
    else
    printf("consonant");
    }
}
