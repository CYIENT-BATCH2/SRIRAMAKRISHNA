//15.Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where empty string is present. 
//And replace the empty string array element as “CYIENT”



//header files
#include<stdio.h>  
#include<string.h>  
int main()                                                                      //main function starts from here 
{
    int i = 0;                                                                  //variable declaration and initialization
    char string[6][15] = {"BOSCH","CONTINENTAL","ZF","","BROADCOM","QUALCOMM"}; //given the input array string 
    while(i < 6)                                                                //using the while loop checking the each array string which has the empty 
    {
        if(! strcmp(string[i], ""))                                             //using the strcmp and strcpy function of string.h header file performing the given operation 
        {
            strcpy(string[i],"CYIENT");
            printf("The empty string is present is the array at %d position\n", i);
        }
        i++;
    }
    printf("After the replaced the empty string  with cyient : \n");
   for(int i = 0; i < 6; i++)
   {
       printf("%s ", string[i]);                                                //printing array of strings
   }
}
