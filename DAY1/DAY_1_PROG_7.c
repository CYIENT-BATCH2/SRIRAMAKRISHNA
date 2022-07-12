#include <stdio.h>

int main()
{
    long int number,temp,sum=0,rem; 
    printf("enter 10 digit number\n");
    scanf("%ld",&number);
    if(number>999999999&&number<=9999999999)
    {
    temp=number;
loop:
    if(temp>0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
        goto loop;
    }
    if(number==sum)
    printf("%ld is a palindrome",number);
    else
    printf("%ld is not a palindrome",number);
    return 0;
    }
    printf("enter 10 digit number only\n");
}
