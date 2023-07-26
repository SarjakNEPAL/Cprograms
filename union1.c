#include<stdio.h>
#include<conio.h>
#include<string.h>

union student
{
    int id;
    char name[50];
};

void main()
{
    union student a;
    a.id=10;
    printf("Id=%d",a.id);
    printf("\n name=%d",a.name[0]);
    printf("\n name=%d",a.name[1]);
}
