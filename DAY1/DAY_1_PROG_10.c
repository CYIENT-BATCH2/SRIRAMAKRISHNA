#include <stdio.h>
int main() {
    int person1,person2,person3;
    printf("enter the three persons weight:\n");
    scanf("%d %d %d",&person1,&person2,&person3);
    if((person1==person2)&&(person2==person3))
    printf("all are same weight");
    else if((person1>person2)&&(person1>person3))
    printf("person1 having heaviest weight");
    else if((person2>person1)&&(person2>person3))
    printf("person2 having heaviest weight");
    else if((person3>person1)&&(person3>person2))
    printf("person3 having heaviest weight");
    else if(person1==person2)
    printf("person1 and person2 are having heaviest weight");
    else if(person2==person3)
    printf("person2 and w3 are having heaviest weight");
    else if(person3==person1)
    printf("person1 and person3 are having heaviest weight");
}
