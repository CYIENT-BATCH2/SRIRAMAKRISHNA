#include <stdio.h>
int main()
{
    int hexvalue,shiftvalue;
    printf("enter the hex value:\n");
    scanf("%X",&hexvalue);
    printf("enter the right shift bit value:\n");
    scanf("%d",&shiftvalue);
    printf("After doing hex right shift the value = %X",(hexvalue>>shiftvalue));
}
