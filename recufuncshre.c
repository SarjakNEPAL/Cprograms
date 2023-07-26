#include<stdio.h>

int shreyash(int);

void main()
{
    int sere;
    printf("Enter number");
    scanf("%d",&sere);
    printf("\n %d factorial = %d",sere,shreyash(sere));
}

int shreyash(int g)
{   int mal;
    if(g<=1)
    {
        return 1;
    }
    else
    {
        mal=g*shreyash(g-1);
    }
    return mal;
}
