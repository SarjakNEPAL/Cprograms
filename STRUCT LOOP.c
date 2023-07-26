#include<stdio.h>
#include<conio.h>
#include<string.h>

struct students
{
    int id;
    char name[50];
    char gender[5];
    int tscore;
};

void main()
{
    struct students s[5];
    int i,sum=0,big,ent;
    for(i=0;i<5;i++)
    {
        printf("\n Enter id \t");
        scanf("%d",&s[i].id);
        printf("\n Enter name \t");
        scanf("%s",s[i].name);
        printf("\n Enter Gender \t");
        scanf("%s",s[i].gender);
        printf("\n Enter Total score \t");
        scanf("%d",s[i].tscore);

    }
    printf("\n the Student info are:-\n");
    for(i=0;i<5;i++)
    {
        printf("\n id=%d \t",s[i].id);
        printf("\n name=%s \t",s[i].name);
        printf("\n Gender=%s \t",s[i].gender);
        printf("\n Total score=%d \t",s[i].tscore);
        if(big<s[i].tscore)
        {
            big=s[i].tscore;
            ent=i;
        }
        sum=sum+s[i].tscore;
    }
    printf("\n student who get highest = \n id=%d \n name= %s \n Gender=%s \n total score=%d \n",s[ent].id,s[ent].name,s[ent].gender,s[ent].tscore);
}
