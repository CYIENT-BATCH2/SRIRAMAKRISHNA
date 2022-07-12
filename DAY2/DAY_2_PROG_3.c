#include<stdio.h>
int main()
{
    int TotalStudents;
    printf("enter the number of students in the class:\n");
    scanf("%d",&TotalStudents);
    printf("Total Number of Handshakes = %d",(TotalStudents*(TotalStudents-1)));
}
