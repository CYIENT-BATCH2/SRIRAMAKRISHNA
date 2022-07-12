#include <stdio.h>
int main() {
    int a,b,c,d,e,f,g,h,intsum,integersum;
    float k,l,m,n,o,p,q,floatsum,floatsum1,floatavg,intavg,dividesum,divideavg,mean;
    printf("enter the integer values:\n");
    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
    printf("enter the float values:\n");
    scanf("%f %f %f %f %f %f %f",&k,&l,&m,&n,&o,&p,&q);
    intsum=a+b+c+d+e+f+g+h;
    floatsum=k+l+m+n+o+p+q;
    integersum=intsum;
    floatsum1=floatsum;
    intavg=integersum/8;
    floatavg=floatsum1/7;
    mean=intsum/8;
    printf("sum of integers = %d\n",intsum);
    printf("sum of float values = %f\n",floatsum);
    printf("average of integers = %f\n",intavg);
    printf("average of float = %f\n",floatavg);
    printf("mean = %f\n",mean);
    dividesum=intsum/floatsum;
    divideavg=intavg/floatavg;
    printf("integer sum/float sum = %f\n",dividesum);
    printf("integer average/float average = %f\n",divideavg);
    printf("float values to integer values = %d %d %d %d %d %d %d\n",(int)k,(int)l,(int)m,(int)n,(int)o,(int)p,(int)q);
}
