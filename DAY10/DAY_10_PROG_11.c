// 11. Write a function to store "G_Str_SteeringAngle_sint" to "G_Msg_SteeringInformation_Byte" as shown below.
// signed int G_Str_SteeringAngle_sint = -60;
// unsigned char G_Msg_SteeringInformation_Byte[3u];"

#include<stdio.h>
void SteeringInformation(signed int G_Str_SteeringAngle_sint,unsigned char G_Msg_SteeringInformation_Byte[]);

int main()
{
    int i,j;                                                                        //declaration of variables
    signed int G_Str_SteeringAngle_sint = -60;
    unsigned char G_Msg_SteeringInformation_Byte[3];                                /*declaration and initialization of variables*/
    
    printf("G_Str_SteeringAngle_sint = %d = ",G_Str_SteeringAngle_sint); 
    for(i=11;i>=0;i--)
    {
        printf("%d",(G_Str_SteeringAngle_sint>>i)&1);                               //printing the G_Str_SteeringAngle_sint in binary values
    }
    printf("\n");
   
    SteeringInformation(G_Str_SteeringAngle_sint,G_Msg_SteeringInformation_Byte);     //function call
    
    for(i=0;i<3;i++)
    {
        printf("G_Msg_SteeringInformation_Byte[%d] = ",i);
        //printing the information based on index 
        for(j=7;j>=0;j--)
        {
        if(i==0)
        {
        if(j>1)
        printf("-");
        else
        printf("%d",(G_Msg_SteeringInformation_Byte[i]>>j)&1);
        }
        if(i==1)
        {
        printf("%d",(G_Msg_SteeringInformation_Byte[i]>>j)&1);
        }
        if(i==2)
        {
        if(j>5)
         printf("%d",(G_Msg_SteeringInformation_Byte[i]>>j)&1);
        else
        printf("-");
        }
        }
        printf("\n");
    }
}

void SteeringInformation(signed int G_Str_SteeringAngle_sint,unsigned char G_Msg_SteeringInformation_Byte[])    //function definition
{
    G_Msg_SteeringInformation_Byte[0] = (G_Str_SteeringAngle_sint>>10)&3;
    G_Msg_SteeringInformation_Byte[1] = (G_Str_SteeringAngle_sint>>2)&255;              /*shifting the bits*/
    G_Msg_SteeringInformation_Byte[2] = (G_Str_SteeringAngle_sint<<10)&4095;
}
