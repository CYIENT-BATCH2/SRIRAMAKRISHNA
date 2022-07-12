#include <stdio.h>
int main() 
{
    int number,num,rev=0,temp,rem,cnt=0,dup,count=0,count1=0;
    
first:  printf("enter the number:\n");
    scanf("%d",&num);
    count=0;
    temp=num;
second:
    if(temp>0)
    {
    count++;
    temp/=10;
    goto second;
    }
    cnt=count;
    dup=num;
    if((count<6)||(count>6))
    goto abc;
    else
    {
a: 
        if(cnt>0)
        {
        if(dup%10==0)
        {
abc:           
        printf(" the number must be six digit number and number do not have a zero\n");
        goto first;
        }
        else
        {
        dup/=10;
        cnt--;
        goto a;
        }
        }
        
    }
    number=num;
count1=count;
last:  
    if(count1>0)
    {
        rem=number%10;
        rev=rev*10+rem;
        number/=10;
        count1--;
        goto last;
    }
    printf("reverse=%d",rev);
}
