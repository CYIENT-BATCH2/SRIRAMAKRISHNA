//7. I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.
//II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55

#include <stdio.h>

int main()
{
    int SSPSTAT,number,i;                                       //declaration of varaiables 
    printf("enter the SSPSTAT register 8 bit(hex) value:\n");
    scanf("%X",&SSPSTAT);                                       //reading register value
    if((SSPSTAT>=0x00)&&(SSPSTAT<=0XFF))                        //checking register value is 8bit or not
    {
    printf("The register value = ");
    for(i=7;i>=0;i--)                                           //loop for printing the register bits
    printf("%d",(SSPSTAT>>i)&1);                                //printing the register value i binary
    printf("\n");
    
    printf("After clearing the bits CKE P S = ");          
    number=SSPSTAT;         
    number=(number & 0XA7);                                     //clearing the bits CKE,P,S bits in SSPSTAT register  
    for(i=7;i>=0;i--)                                           //loop for printing the register bits after clearing the CKE,P,S bits in SSPSTAT register
    printf("%d",(number>>i)&1);                                 //logic for printing the register value in binary after clearing the CKE,P,S bits
    printf("\n");
    
    if(SSPSTAT==0X55)                                           //checking the register value is equal to 0x55
    {
        printf("The value of UA BF SMP bits in SSPSTAT register = ");
        SSPSTAT=SSPSTAT & 0X83;                                 //logic for finding the value of UA,BF,SMP bits
        printf("%X",SSPSTAT);                                   //printing the UA,BF,SMP value
    }
    else 
    printf("The register value is not equal to 0X55");          //if reg value is not equal to 0x55 the it prints this message
    }
    
    else
    {
    printf("register value must be 8 bit value");               //printing the value is not a 8 bit value
    }
}
