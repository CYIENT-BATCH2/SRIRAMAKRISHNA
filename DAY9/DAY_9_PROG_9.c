/*9. Assume that we have a car with 8 seats, and we are monitoring 8 seat belt status in a variable “G_Msg_switchstatus_Byte[]” as shown in pic1.
Each switch status is combination of 2 bits as shown in pic2.
Write status of switches into variable “G_Msg_switchstatus_Byte[]” as below.
SWITCH1, SWITCH7 status is “faulty type 1 in switch”, SWITCH2, SWITCH5 status is ”switch unbuckle”,
SWITCH3, SWITCH6 status is “switch buckle”, SWITCH4, SWITCH0 status is “faulty type 2 in switch” without disturbing the other bits.*/


#include <stdio.h>
int main()
{
    int G_Msg_switchstatus_Byte[3],i,j;                      //declaration of array 
    int faulty_type_1_in_Switch=0;                           //declaration of variables
    int Switch_unbuckle=1;
    int Switch_buckle=2;
    int faulty_type_2_in_Switch=3;
    int Switch1=faulty_type_1_in_Switch;
    int Switch7=faulty_type_1_in_Switch;
    int Switch2=Switch_unbuckle;
    int Switch5=Switch_unbuckle;
    int Switch3=Switch_buckle;
    int Switch6=Switch_buckle;
    int Switch4=faulty_type_2_in_Switch;
    int Switch0=faulty_type_2_in_Switch;
    
    G_Msg_switchstatus_Byte[0]=(Switch0<<2|Switch1);          //setting the switch 0 and switch1 status
    G_Msg_switchstatus_Byte[1]=(Switch2<<6|Switch3<<4|Switch4<<2|Switch5);      //setting the switch2 switch3 switch4 and switch5 status
    G_Msg_switchstatus_Byte[2]=(Switch6<<6|Switch7<<4);       //setting the switch6 and switch7 status
    for(i=0;i<3;i++)
    {
    printf("G_Msg_switchstatus_Byte[%d] = ",i);
    for(j=7;j>=0;j--)
    {
    printf("%d",(G_Msg_switchstatus_Byte[i]>>j)&1);            //printing the message byte 
    }
    printf("\n");
    }
    
}
