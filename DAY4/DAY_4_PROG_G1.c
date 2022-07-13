#include <stdio.h>
int main()
{
   int a,b,temp;
   printf("enter the two numbers:\n");
   scanf("%d %d",&a,&b);
   printf("before swapping a=%d b=%d",a,b);
    temp=b;
    b=a;
    a=temp;
    printf("after swapping a=%d b=%d",a,b);
   
}
