#include<stdio.h>
int sum(int,int);

void main()
{
    int a,b;
    printf("\n enter 1st number \n");
    scanf("%d",&a);
    printf("\n enter 2nd number \n");
    scanf("%d",&b);
    printf("Sum=%d",sum(a,b));
}
int sum(int a,int b)
{
    return a+b;
}
