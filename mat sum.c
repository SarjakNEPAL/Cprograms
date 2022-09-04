#include<stdio.h>
int addmat(int aa[2][2],int ba[2][2])
{
    int sum[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=aa[i][j]+ba[i][j];
        }
    }
    printf("\n the sum = \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}

int main()
{

        int a[2][2],b[2][2],s[2][2],i,j;
        for(int m=1;m<3;m++)
        {
            printf("Enter values of matrix no %d",m);
             for(i=0;i<2;i++)
                {
                    for(j=0;j<2;j++)
                    {
                        printf("\n Enter value of %d,%d",i,j);
                        if(m==1)
                        {
                            scanf("%d",&a[i][j]);
                        }
                        else
                        {
                            scanf("%d",&b[i][j]);
                        }
                    }
                }
        }
        addmat(a,b);
}
