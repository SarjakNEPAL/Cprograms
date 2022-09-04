#include<stdio.h>
void facto(int);
void main()
{
    int a;
    printf("enter number \n");
    scanf("%d",&a);
    facto(a);
}
void facto(int a)
{
    int fa=1;
    for(int i=1;i<=a;i++)
    {
        fa=fa*i;
    }
    printf("\n factorial=%d",fa);
}
