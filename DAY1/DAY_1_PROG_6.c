#include <stdio.h>
int main() {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,temp;
    printf("enter roll numbers of students:\n");
    scanf("%d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);
LOOP:
    if(n1>n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
        goto LOOP;
    }
    if(n2>n3)
    {
       temp=n2;
        n2=n3;
        n3=temp;  
        goto LOOP;
    }
     if(n3>n4)
    {
       temp=n3;
        n3=n4;
        n4=temp;  
        goto LOOP;
    }
    if(n4>n5)
    {
       temp=n4;
        n4=n5;
        n5=temp; 
        goto LOOP;
    }
    if(n5>n6)
    {
       temp=n5;
        n5=n6;
        n6=temp; 
        goto LOOP;
    }
    if(n6>n7)
    {
       temp=n6;
        n6=n7;
        n7=temp;  
        goto LOOP;
    }
    if(n7>n8)
    {
       temp=n7;
        n7=n8;
        n8=temp; 
        goto LOOP;
    }
    if(n8>n9)
    {
        temp=n8;
        n8=n9;
        n9=temp;
    }
   printf("after sorting %d %d %d %d %d %d %d %d %d",n1,n2,n3,n4,n5,n6,n7,n8,n9); 
}
