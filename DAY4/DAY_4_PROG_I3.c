#include <stdio.h>
int main()
{
   int number,bitnumber,bit=31,a;
   printf("enter the number:\n");
   scanf("%d",&number);
   printf("enter the bit number to compliment:\n");
   scanf("%d",&bitnumber);
   printf("before compliment the number = %d",number);
   printf(" = ");
   loop:
        if(bit>=0)
        {
        printf("%d",((number>>bit)&1));
        bit--;
        goto loop;
        }
        printf("\n");
        
   a=((1<<bitnumber)^number);
   printf("after compliment the result = %d",a);
   printf(" = ");
   bit=31;
   loop1:
        if(bit>=0)
        {
        printf("%d",((a>>bit)&1));
        bit--;
        goto loop1;
        }
}
