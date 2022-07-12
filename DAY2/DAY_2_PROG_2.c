#include<stdio.h>
int main()
{
	int number,i=8,bin;
    printf("enter the two digit ID:\n");
loop:
    scanf("%d",&number);
	if((number>9)&&(number<100))
	{
loop1:
    if(i>=0)
	{
	bin=((number>>i)&1);
	printf("%d",bin);
	i--;
	goto loop1;
	}
	}
	else
	{
	printf("enter proper two digit ID:\n");
	goto loop;
	}
}
