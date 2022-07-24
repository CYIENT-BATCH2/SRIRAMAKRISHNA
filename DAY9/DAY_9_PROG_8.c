//8. I). Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” 
//if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”

#include <stdio.h>

int main()
{
    int number,number1,i;
    printf("enter the number to set the bits in CMCON register(8 bit value)\n");	
    scanf("%X",&number);							         //Reading CMCON register						
    printf("enter the number to set the bits in ADCON0 register(8 bit value)\n");
    scanf("%X",&number1);							         //Reading ADCON0 register
   
    printf("the bits in CMCON : ");						 
    for(i=7;i>=0;i--)						               //loop for printing the bit in CMCON register
    {
        printf("%d ",((number>>i)&1)); 				//printing bits in CMCON register
    }
    printf("\n");
   
    
    printf("the bits in ADCON0 : ");					
    for(i=7;i>=0;i--)						//loop for printing binary value of ADCON0
    {
        printf("%d ",((number1>>i)&1));  			//printing bits in ADCON0
    }
    printf("\n");
    
    
    if((number1 & 0X38) == 0X30)    				   //checking CHS3, CHS2, CHS1, bits are set to 0x06 in ADCON0 register
    {
    {
        number=(number | 0XC8); 			        	//clearing the bits CIS,C2OUT,C1OUT
    }
    
    
    printf("After setting the bits in CMCON : ");
    for(i=7;i>=0;i--)						               //loop for printing the binary value
    {
        printf("%d ",((number>>i)&1));				 //printing the binary value of CMCON register
    }
    }
    else
    printf("CHS3,CHS2,CHS1 bits are not set to 0x06");
}
