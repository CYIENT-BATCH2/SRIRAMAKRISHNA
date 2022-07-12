#include <stdio.h>
int main() 
{
    int n=9,i=0,j=0;
loop1:
    if(i<n)
    {
    j=0;
loop2:    
    if(j<n-i)
    {
    if(i<=j)
    printf("*");
    else
    printf(" ");
    j++;
    goto loop2;
    }
    printf("\n");
    i++;
    goto loop1;
}
}
