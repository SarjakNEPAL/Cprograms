#include<stdio.h>
#include<conio.h>

int arr();

void main(){
    //clrscr();
    if(arr()!=0){
        printf("\n Array program successful");
   }
    //getch();
}

int arr()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i]=i+1;
    }
    for(int i=0;i<10;i++)
    {
        printf("\n %d",a[i]);
    }
}
