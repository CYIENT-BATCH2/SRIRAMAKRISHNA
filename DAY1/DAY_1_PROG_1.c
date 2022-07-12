#include <stdio.h>
int main()
{
    unsigned int number;
    printf("enter the number:\n");
    scanf("%d",&number);
    ((number%11==0)||(number%11==1))?printf("SPECIAL"):printf("NOT A SPECIAL");
}
