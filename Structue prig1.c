#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
     int rollno;
     char name[50];
     char course[50];
     int phone;
};

void main()
{
    struct student a;
    printf("\n enter student's Roll no\t ");
    scanf("%d",&a.rollno);
    printf("\n enter the student's name\t");
    scanf("%s",a.name);
    printf("\n enter student course");
    scanf("%s",a.course);
    printf("\n enter Phone number \t");
    scanf("%d",&a.phone);
    printf("\n The student information is given below \n");
    printf("Roll no= %d",a.rollno);
    printf("Name =%s",a.name);
    printf("Course =%s",a.course);
    printf("Phone=%d",a.phone);
}
