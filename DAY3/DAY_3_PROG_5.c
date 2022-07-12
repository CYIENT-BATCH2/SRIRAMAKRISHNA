#include <stdio.h>
int main()
{
    int num=0xFE,result;
    result=(num>>3);
    printf("after right shift, the value is %X",result);
    return 0;
}
