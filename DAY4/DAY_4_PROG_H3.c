#include <stdio.h>
int main()
{
    int number;
    printf("enter the number:\n");
    scanf("%d",&number);
    if(number==0)
    printf("the number is neither positive nor negative");
    else if(number>0)
    printf("%d is a positive number",number);
    else
    printf("%d is a negative number",number);
}
