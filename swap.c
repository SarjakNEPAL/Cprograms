#include<stdio.h>

void swap(int *a,int *b);
void main()
{
    int x=1,y=2;
    printf("Number before swap a=%d and b=%d",x,y);
    swap(&x,&y);
    printf("\n Number after swap a=%d and b=%d",x,y);
}

void swap(int *a,int *b)
{
    int *temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

