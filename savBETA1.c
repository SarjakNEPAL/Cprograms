#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
//PROMPTS//
void titlepmp();
void auxpmp();
void lockpss();
void intropmp();
//PASSWORD RELATED//
void adminpasschg();
void usercheck();
int passchk(int);
void chgpass();
//CALCULATIONS RELATED//
void addmon();
void submon();
void dissav();
void expend(int, char);
//CHANGES RELATED//
void setgoal();//setting goal//
void deff();
//ENGINE FUNCTION//
void sav();

void chgpass()
{
    int a,np;
    printf("\n Enter the Old password \t");
    scanf("%d",&a);
    if(passchk(a)==1)
  {
    printf("\n enter new password \t");
    scanf("%d",&np);
    FILE *fl;
    fl=fopen("temp.dat","a+");
    fprintf(fl,"%d",np);
    fclose(fl);
    remove("p.dat");
    rename("temp.dat","p.dat");
  }
}
void titlepmp() //main title prompt//
{
    printf("\n<><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("<><>------------SAVINGS----MANAGER------------<><>\n");
    printf("<><>------------MADE--BY--SARJAK--------------<><>\n");
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><>\n");
}

void auxpmp() //input ask prompt//
{

    printf("<><> Press 1 to view your Savings             <><>\n");
    printf("<><> Press 2 to add your Savings              <><>\n");
    printf("<><> Press 3 to reduce your Savings           <><>\n");
    printf("<><> to exit press any other key              <><>\n");
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><>\n");
}
void lockpss() //6 times wrong input prompt//
{

    printf("\n<><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("<><>------------WRONG----PASSWORD-------------<><>\n");
    printf("<><>------------UNABLE--TO---VERIFY-----------<><>\n");
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><>\n");
}
void intropmp()
{
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("<><> Press 1 to deal with your savings        <><>\n");
    printf("<><> Press 2 to change the settings           <><>\n");
    printf("<><> press any key to close the program       <><>\n");
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><>\n");
}
void settpmp()
{
        printf("<><><><><><><><><><><><><><><><><><><><><><><><><>\n");
        printf("<><> Press 1 to change you goal               <><>\n");
        printf("<><> Press 2 to reset everything to default   <><>\n");
        printf("<><> Press 3 to change your password          <><>\n");
        printf("<><> to exit press any other key              <><>\n");
        printf("<><><><><><><><><><><><><><><><><><><><><><><><><>\n");
}


void usercheck()
{
    int b=0,pas,tt; //b is for avoiding many wrong input, pass is to store password
    while(b!=6)
    {
        printf("\n\n ENTER PASSWORD--default-is-0---------->\t");
        scanf("%d",&pas);//password is entered by user//
        tt=passchk(pas);//password is checked by user//
        if(tt==1)
        {
            sav(); //password correct//
            break;
        }
        else
        {
            printf("\n<><><><><><>wrong----password<><><><><><><><><><><>");
            b=b+1;  //password wrong//
            if(b==6)
            {

                titlepmp(); //wrong password entered 6 times//
                lockpss();

            }
        }
    }
}
void dissav()
{
    int s,goal;
    FILE *fs,*fg;
    fg=fopen("goa.dat","ab+"); //opening file containing goal//
    fs=fopen("saving.dat","ab+");//opening file containing savings//
    fscanf(fg,"%d",&goal);
    fscanf(fs,"%d",&s);
    printf("<><> savings= RS %d                            <><>\n",s);
    printf("<><> goal = %d                                 <><>\n",goal);
    printf("<><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    fclose(fg);
    fclose(fs);
}


void setgoal()
{
    int ng;
    FILE *fc;
    fc=fopen("cpy.dat","a+");
    printf("\n enter new goal \t");
    scanf("%d",&ng);
    fprintf(fc,"%d",ng);
    fclose(fc);
    remove("goa.dat");
    rename("cpy.dat","goa.dat");
    printf("\n new goal= %d \n",ng);
}

void deff()
{
    FILE *fs,*fg,*fp;
    remove("saving.dat");
    remove("goa.dat");
    remove("p.dat");
    fs=fopen("saving.dat","a+");
    fg=fopen("goa.dat","a+");
    fp=fopen("p.dat","a+");
    fprintf(fs,"%d",0);
    fprintf(fg,"%d",0);
    fprintf(fp,"%d",0);
    fclose(fs);
    fclose(fg);
    fclose(fp);
}

void addmon()//adding to savings//
{
     int num,n;
    int sum;
    FILE *fs,*fc;
    fs=fopen("saving.dat","r+");
    fc=fopen("cpy.dat","a+");
    fscanf(fs,"%d",&n);
    printf("\n Enter the amount you want to add \n");
    scanf("%d",&num);
    sum=num+n;
    fprintf(fc,"%d",sum);
    fclose(fs);
    fclose(fc);
    remove("saving.dat");
    rename("cpy.dat","saving.dat");
    printf("\n");
}

void submon()//subtracting money of saving//
{
    int num,nu;
    int sum,re;
    FILE *fs,*fc;
    fs=fopen("saving.dat","r+");
    fc=fopen("cpy.dat","a+");
    fscanf(fs,"%d",&nu);
    printf("\n Enter the amount you want to subtract \n");
    scanf("%d",&num);
    sum=nu-num;
    fprintf(fc,"%d",sum);
    fclose(fs);
    fclose(fc);
    remove("saving.dat");
    rename("cpy.dat","saving.dat");

    printf("\n");
}

void sett()
{

    int tt,pas;
    printf("\n\n ENTER PASSWORD--default-is-0---------->\t");
    scanf("%d",&pas);//password is entered by user//
    tt=passchk(pas);//password is checked by user//
    if (tt==1)
    {
        int kk;
        settpmp();
        scanf("%d",&kk);
        if(kk==1)
        {
            setgoal();
        }
        else if(kk==2)
        {
            deff();
        }
        else if(kk==3)
        {
            chgpass();
        }
        else
        {

        }
    }
}
int passchk(int p)//password checking//
{
    FILE *fp;   //file pointer//
    int filpass; //for storing retrieved password from file//
    fp=fopen("p.dat","w+");//opening file and assigning to file pointer//
    fscanf(fp,"%d",&filpass);//retrieving the password from file//
    if(p==filpass)//comparing if password is correct//
    {
        return 1;
    }
    else
    {
        return 0;
    }
    fclose(fp);
    remove("p.dat");
}

void sav()  //savings manipulation//
{
    int a;  //variable to store choice of user//
    titlepmp();
    printf("<><> login successful                         <><>\n");
    auxpmp();
    scanf("%d",&a); //asking for choice//
    if(a==1)
    {
        dissav();  //displays current savings with goal//
    }
    else if(a==2)
    {
        addmon();//adds savings and displays savings with goal//
        dissav();
    }
    else if(a==3)
    {
        submon(); //reduces savings and displays savings with goal//
        dissav();
    }
    else
    {
        printf("\n exiting\n");
    }
}



void main()
{
    char a[1]="N";
    int ap,con=0;
    while(con==0)
    {
    titlepmp();
    intropmp();
    scanf("%d",&ap);
    if(ap==1)
    {
        usercheck();
    }
    else if(ap==2)
    {
        sett();
    }
    else
    {
        break;
    }
    printf("\n Do you want to exit?(Y/N)\t");
    scanf("%s",&a);
    if(strcmp(strupr(a),"N")==0)
    {
        con==0;
    }
    else
    {
        con=1;
    }
    }
}
