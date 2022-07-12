#include<stdio.h>
int main()
{
    int number,count,num,cnt,rem,sum=0;
loop:
    printf("enter the 5 digit number:\n");
    scanf("%d",&number);
    if((number>9999)&&(number<100000))
    {
    cnt=5;
    num=number;
loop1:
    if(cnt>0)
    {
        rem=num%10;
        if((cnt==1)||(cnt==4))
        sum=sum+rem;
        cnt--;
        num/=10;
        goto loop1;
    }
    printf("sum of first and second last digits=%d",sum);
    }
    else
    {
    printf("enter five digit number\n");
    goto loop;
    }
}
