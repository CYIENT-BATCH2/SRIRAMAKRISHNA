#include<stdio.h>
int main()
{
    int a;
    short int s;
    long int l;
    long long int ll;
    float f;
    char ch;
    double d;
    long double ld;
    printf("size of int is %ld and size of int variable is %ld\n",sizeof(int),sizeof(a));
    printf("size of short int is %ld and size of short int variable is %ld\n",sizeof(short int),sizeof(s));
    printf("size of long int is %ld and size of long int variable is %ld\n",sizeof(long int),sizeof(l));
    printf("size of long long int is %ld and size of long long int variable is %ld\n",sizeof(long long int),sizeof(ll));
    printf("size of float is %ld and size of flaot variable is %ld\n",sizeof(float),sizeof(f));
    printf("size of char is %ld and size of char variable is %ld\n",sizeof(char),sizeof(ch));
    printf("size of double is %ld and size of double variable is %ld\n",sizeof(double),sizeof(d));
    printf("size of long double is %ld and size of long double variable is %ld\n",sizeof(long double),sizeof(ld));
}
