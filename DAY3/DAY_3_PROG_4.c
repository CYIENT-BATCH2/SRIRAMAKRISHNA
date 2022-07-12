#include<stdio.h>
int main()
{
    int dec=204,pos=31,binary;
    printf("hexa decimal value = %x\n",dec);
    printf("binary = ");
loop:
    if(pos>=0)
    {
    binary=((dec>>pos)&1);
    printf("%d",binary);
    pos--;
    goto loop;
    }
    printf("\ndecimal = %d",dec);
}
