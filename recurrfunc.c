#include<stdio.h>

int facto(int);

void main()
{   int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("factoril=%d",facto(a));
}

int facto(int a)
{
    if(a==1){
     return 1;
    }
    else
    {
        return a*facto(a-1);
    }

}
