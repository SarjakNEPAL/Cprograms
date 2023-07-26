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
    struct student a,*p;
    p=&a;
    printf("\n enter student's Roll no\t ");
    scanf("%d",&a.rollno);
    printf("\n enter the student's name\t");
    scanf("%s",a.name);
    printf("\n enter student course");
    scanf("%s",a.course);
    printf("\n enter Phone number \t");
    scanf("%d",&a.phone);
    printf("\n The student information is given below \n");
    printf("Roll no= %d",p->rollno);
    printf("Name =%s",p->name);
    printf("Course =%s",p->course);
    printf("Phone=%d",p->phone);
}
