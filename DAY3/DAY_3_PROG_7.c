#include <stdio.h>
int main()
{
    int age,birthyear,presentyear,birthmonth,presentmonth,month,year;
    printf("enter the birth year and month:\n");
    scanf("%d %d",&birthyear,&birthmonth);
    printf("entre the present year and month:\n");
    scanf("%d %d",&presentyear,&presentmonth);
    if(birthmonth<=presentmonth)
    {
    year=presentyear-birthyear;
    month=presentmonth-birthmonth;
    }
    else
    {
    year=presentyear-birthyear-1;
    month=(12-birthmonth)+presentmonth;
    }
    printf("age=%d years %d months",year,month);
}
