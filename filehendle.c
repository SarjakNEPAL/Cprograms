#include<stdio.h>
#include<string.h>
void main()
{
    char con[1];
    printf("\n File Handling Test phase 1 \n");
    printf("trying to open School.txt \n");
    FILE *file1;
    file1=fopen("School.txt","r");
    if(file1==NULL)
    {
        printf("\n File not opened\n do you want to fix it?\n Warning All data will be lost");
        printf("(Y/N)? \t");
        gets(con);
        if(strcmp(strupr(con),"Y")==0)
        {
            fclose(file1);
            file1=fopen("School.txt","ab+");
            if(file1!=NULL)
            {
                printf("\n File opened successfully\n");
            }
          }
        }
        else
        {
            printf("\n file opened successfully");
        }
        printf("do you want to close the file(Y/N)\t");
        gets(con);
        if(strcmp(strupr(con),"Y")==0)
        {
            fclose(file1);
            printf("\n file closed");
        }

}


