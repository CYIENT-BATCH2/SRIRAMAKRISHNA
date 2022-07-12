#include <stdio.h>
int main() {
     int choice,a,b,y,cnt;
loop:
     printf("1-AND 2-OR 3-NOT 4-exit\n");
     printf("enter the choice:\n");
     scanf("%d",&choice);
     if(choice==1)
     {
         cnt=4;
ANDloop:
         if(cnt>0)
         {
         printf("(AND)enter the inputs(0 or 1):\n");
         scanf("%d %d",&a,&b);
         if(((a==0)||(a==1))&&((b==0)||(b==1)))
         {
         y=a&&b;
         printf("input1=%d input2=%d output=%d\n",a,b,y);
         cnt--;
         goto ANDloop;
         }
         }
         goto loop;
     }
     if(choice==2)
     {
         cnt=4;
ORloop:
         if(cnt>0)
         {
         printf("(OR)enter the inputs(0 or 1):\n");
         scanf("%d %d",&a,&b);
         if(((a==0)||(a==1))&&((b==0)||(b==1)))
         {
         y=a||b;
         printf("input1=%d input2=%d output=%d\n",a,b,y);
         cnt--;
         goto ORloop;
         }
         }
         goto loop;
     }
     if(choice==3)
     {
         cnt=2;
 NOTloop:
         if(cnt>0)
         {
         printf("(NOT)enter the input(0 or 1):\n");
         scanf("%d",&a);
         if((a==0)||(a==1))
         {
         y=!a;
         printf("input1=%d output=%d\n",a,y);
         cnt--;
         goto NOTloop;
         }
         }
         goto loop;
     }
     if(choice==4)
     return 0;
     
 }
