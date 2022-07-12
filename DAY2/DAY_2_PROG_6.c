#include <stdio.h>
int main()
{
    int choice;
    float fahrenheit,celsius;
    printf("enter 1 for convert Fahrenheit to Celsius\n");
    printf("enter 2 for convert Celsius to Fahrenheit\n");
    printf("enter the choice\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("enter the Fahrenheit\n");
        scanf("%f",&fahrenheit);
        celsius=((fahrenheit-32)*5)/9;
        printf("celsius = %f",celsius);
    }
    if(choice==2)
    {
        printf("enter the Fahrenheit\n");
        scanf("%f",&celsius);
        fahrenheit=((celsius*9)/5)+32;
        printf("fahreheit = %f",fahrenheit);
    }
}
