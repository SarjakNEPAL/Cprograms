#include<stdio.h>
#include<conio.h>

union emp
{
    int Id;
    char name[50];
}a;

void main()
{
    printf("Enter id \t");
    scanf("%d",&a.Id);
   printf("Enter Name");
    scanf("%s",a.name);
    printf("\n ID= %d",a.Id);
   printf("\n Name=%s",a.name);
    getch();
}
