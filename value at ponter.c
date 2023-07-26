#include<stdio.h>

void main()
{   int average;
    int a=5,c=20,m=66,*b,*n,*d;
    b=&a;
    n=&c;
    d=&m;
    average=(*b+*n+*d)/3;
    printf("Average = %d",average);
}
