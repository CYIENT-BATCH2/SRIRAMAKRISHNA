#include <stdio.h>
int main()
{
    int number;
    printf("enter the number:\n");
    scanf("%d",&number);
    if(number&&((number&&(number-1))==0))
    printf("%d is a power of 2",number);
    else
    printf("%d is not a power of 2",number);
}
