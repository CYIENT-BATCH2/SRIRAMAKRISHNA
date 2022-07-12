#include<stdio.h>
int main()
{
	long int phnumber;
	int sumofdig=0,rem=0;
	printf("enter the phone number:\n");
	scanf("%lu",&phnumber);
loop:	if(phnumber>0)
	{
	rem=phnumber%10;
	sumofdig=sumofdig+rem;
	phnumber=phnumber/10;
	goto loop;
	}
	printf("sum of digits of phnone number=%d",sumofdig);
}
