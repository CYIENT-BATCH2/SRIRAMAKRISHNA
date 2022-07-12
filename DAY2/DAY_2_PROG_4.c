#include<stdio.h>
int main()
{
    int tickets,count=0,i=3,j=0,result=0;
    printf("enter the total number of lottery tickets:\n");
    scanf("%d",&tickets);
loop1:
        if(i<=tickets)
        {
        j=i;
loop2:
        if(j>0)
        {
            if(j%10==3)
            count++;
            j=j/10;
            goto loop2;
        }
        if(count>=1)
        {
            result++;
        }
        i++;
        count=0;
        goto loop1;
        }
    printf("lucky tickets = %d",result);
}
