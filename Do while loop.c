#include<stdio.h>
#include<conio.h>
void main()
{
    int a[7],i,sum=0;
    for(i=0;i<7;i++)
    {
        printf("\n (%d)Enter Number \t ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        sum=sum+a[i];
    }

    printf("sum= %d", sum);
}
