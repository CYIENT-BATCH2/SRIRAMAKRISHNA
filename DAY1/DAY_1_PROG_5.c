#include <stdio.h>
int main() {
    int a,b,c,d,e;
    printf("enter the numbered names for 5 balls:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if((a>0&&a<10)&&(b>0&&b<10)&&(c>0&&c<10)&&(d>0&&d<10)&&(e>0&&e<10))
    {
        (a%2==0)?printf("ball a=even\n"):printf("ball a=odd\n");
        (b%2==0)?printf("ball b=even\n"):printf("ball b=odd\n");
        (c%2==0)?printf("ball c=even\n"):printf("ball c=odd\n");
        (d%2==0)?printf("ball d=even\n"):printf("ball d=odd\n");
        (e%2==0)?printf("ball e=even\n"):printf("ball e=odd\n");
    }
    else
    printf("you can enter signgle digit numbers(1 to 9 only)");
    
    return 0;
} 
