#include<stdio.h>
struct matrix
{
    int a[2][2];
    int b[2][2];
    int c[2][2]; //WAP TO ADD TWO 2 DIMENTIONAL ARRAY//
}ab;

void display(struct matrix ab);

void main()
{
    int i,j;
    for( i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            ab.a[i][j]=i;
            ab.b[i][j]=j+i+1;
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            ab.c[i][j]=ab.a[i][j]+ab.b[i][j];
        }
    }
    display(ab);
}

void display(struct matrix ab)
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d \t", ab.c[i][j]);
        }
        printf("\n");
    }
}
