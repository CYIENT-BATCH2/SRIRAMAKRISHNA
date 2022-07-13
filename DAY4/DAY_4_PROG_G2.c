#include <stdio.h>
int main()
{
   int a,b;
   printf("enter the two numbers:\n");
   scanf("%d %d",&a,&b);
   printf("before swapping a=%d b=%d\n",a,b);
    a=b-a+(b=a);
    printf("after swapping a=%d b=%d",a,b);
   
}
