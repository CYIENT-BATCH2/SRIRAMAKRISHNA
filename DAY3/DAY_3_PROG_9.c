#include <stdio.h>

int main()
{
    int hex=0xff,pos=7,result,i=1,rem,hexa=0;
    int hex1=0xaa;
    int bin;
    int bin1;
    
    printf("0xff to binary = ");
loop:
    if(pos>=0)
    {
    result=((hex>>pos)&1);
    printf("%d",result);
    pos--;
    goto loop;
    }
    
    printf("\nenetr the binary value:\n");
    scanf("%d",&bin);
    int b=bin;
loop1:
    if(bin>0)
    {
        rem=bin%10;
        hexa=hexa+rem*i;
        i=i*2;
        bin/=10;
        goto loop1;
    }
    printf("\n");
    printf("%d to Hexa value = %x\n",b,hexa);
    
    printf("0xAA to decimal = %d\n",hex1);
    pos=7;
    printf("0xAA to binary = ");
loop2:
    if(pos>=0)
    {
    result=((hex1>>pos)&1);
    printf("%d",result);
    pos--;
    goto loop2;
    }
    
     printf("\nenetr the binary value:\n");
    scanf("%d",&bin1);
    i=1,rem=0,hexa=0;
    int a=bin1;
loop3:
    if(bin1>=1)
    {
        rem=bin1%10;
        hexa=hexa+rem*i;
        i=i*2;
        bin1/=10;
        goto loop3;
    }
    printf("\n%d to decimal = %d\n",a,hexa);
    printf("%d to hexa = %x\n",a,hexa);
}
