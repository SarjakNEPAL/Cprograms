#include<stdio.h>
#include<math.h>

void main()
{   float gg;
    float sr1;
    int sr2;
   scanf("%f",&gg);
    sr1=sqrt(gg);
    sr2=sqrt(gg);
    if(sr1==sr2)
    {
        printf("Perfect number");
    }
    else
    {
        printf("not a perfect number");
    }

}
