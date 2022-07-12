#include <stdio.h>
int main() 
{
    int num;
loop:   
    printf("Enter any one number between 1 to 26\n");
    scanf("%d",&num);
    if((num>=1)&&(num<=26))
        printf("%d = %c",num,num+64);
    else
    goto loop;
}
