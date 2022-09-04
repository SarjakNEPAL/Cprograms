#include<stdio.h>
int rev(int);
void main()                                         {
        int n;
        printf("\n Enter the number\t")             ;
        scanf("%d",&n)                              ;
        printf("\n reverse=%d",rev(n))              ;
                                                    }
int rev(int x)                                      {
    int s=0,d                                       ;
    while(x!=0)                                     {
        d=x%10                                      ;
        s=s*10+d                                    ;
        x=x/10                                      ;
                                                    }
        return(s)                                   ;
                                                    }
