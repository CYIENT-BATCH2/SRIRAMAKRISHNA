//Write a function to store "G_Eng_EngineTemperature_uchar" and "G_Eng_EngineRpm_uint" into " G_Msg_EngineInformation_Byte[5u]" as shown below.
//unsigned char G_Eng_EngineTemperature_uchar = 50u ;
//unsigned int G_Eng_EngineRpm_uint = 1000u;
//unsigned char G_Msg_EngineInformation_Byte[5u];

#include <stdio.h>

int main()
{
    int i,j,n;                                              //declaration of variables
    unsigned char G_Eng_EngineTemperature_uchar = 50;
    unsigned int G_Eng_EngineRpm_uint = 1000;               /*declaration and initialization of variables*/
    unsigned char G_Msg_EngineInformation_Byte[5];
    
    printf("G_Eng_EngineTemperature_uchar = ");
    for(j=7;j>=0;j--)
    {
    printf("%d",(G_Eng_EngineTemperature_uchar>>j)&1);      //printing the engine temperature in binary values
    }
    printf("\nG_Eng_EngineRpm_uint = ");
    for(j=11;j>=0;j--)
    {
    printf("%d",(G_Eng_EngineRpm_uint>>j)&1);               //printing the engine temperature in binary values
    }
    printf("\n");
    G_Msg_EngineInformation_Byte[0] = (G_Eng_EngineRpm_uint>>8)&15;     //assigning and shifting the bits to right (bit 12 to bit 9)
    G_Msg_EngineInformation_Byte[1] = (G_Eng_EngineRpm_uint>>1)&255;    //assigning and shifting the bits to right (bit 8 to bit 1)
    G_Msg_EngineInformation_Byte[2] = (G_Eng_EngineRpm_uint<<11);       //assigning and shifting the bits to left (bit 0)
    G_Msg_EngineInformation_Byte[3] = (G_Eng_EngineTemperature_uchar);  //assigning the temperature to index 3
    
    for(i=0;i<5;i++)
    {
         printf("G_Msg_EngineInformation_Byte[%d] = ",i);
    //printing the engine information based index value   
    for(j=7;j>=0;j--)
    {
        if(i==0)
        {
        if(j>3)
        printf("-");
        else
        printf("%d",(G_Msg_EngineInformation_Byte[i]>>j)&1);
        }
        if(i==1)
        {
        printf("%d",(G_Msg_EngineInformation_Byte[i]>>j)&1);
        }
        if(i==2)
        {
        if(j>6)
         printf("%d",(G_Msg_EngineInformation_Byte[i]>>j)&1);
        else
        printf("-");
        }
        if(i==3)
        {
        printf("%d",(G_Msg_EngineInformation_Byte[i]>>j)&1);
        }
        if(i==4)
        {
        printf("-");
        }
    }
    printf("\n");
    }
}
