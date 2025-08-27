//A TESTER THAT TAKES INPUT FROM THE USER AND THEN TESTS ALL LOGICAL ARITHEMATIC AND RELATIONAL OPERATORS

#include<stdio.h>
#include<string.h>
int main()
{
    printf("ENTER TWO NUMBERS ONE BY ONE TWO TEST ALL THE OPERATORS\n");
    printf("NOTE:DONT GIVE THE SECOND NUMBER AS ZERO COZ DIVISON BY ZERO THROWS ERROR\n");
    int a,b;scanf("%d %d",&a,&b);


    printf("-----ARITHEMATIC OPERATORS-----\n");
    printf("%d + %d=%d\n",a,b,a+b);
    printf("%d - %d=%d\n",a,b,a-b);
    printf("%d * %d=%d\n",a,b,a*b);
    if(b!=0)
       printf("%d / %d=%.2f\n",a,b,(float)a/b);
    else
       printf("DIVISION BY ZERO NOT ALLOWED\n");     
    if(b!=0)
        printf("%d %% %d=%d\n",a,b,a%b);
    else
       printf("CANNOT FIND REMAINDER AS DIVISION BY ZERO IS NOT ALLOWED\n");  



    printf("-----RELATIONAL OPERATORS-----\n");
    printf("%d < %d=%s\n",a,b,(a<b) ? "TRUE":"FALSE");
    printf("%d > %d=%s\n",a,b,(a>b) ? "TRUE":"FALSE");
    printf("%d <= %d=%s\n",a,b,(a<=b) ? "TRUE":"FALSE");
    printf("%d >= %d=%s\n",a,b,(a>=b) ? "TRUE":"FALSE");
    printf("%d == %d=%s\n",a,b,(a==b) ? "TRUE":"FALSE");
    printf("%d != %d=%s\n",a,b,(a!=b) ? "TRUE":"FALSE");
    

    printf("-----LOGICAL OPERATORS-----\n");
    printf("%d<%d && %d>0 && %d>0=%s\n",a,b,a,b,(a<b && a>0 && b>0) ? "TRUE":"FALSE");
    printf("%d<%d || %d>0 || %d>0=%s\n",a,b,a,b,(a<b || a>0 || b>0) ? "TRUE":"FALSE");
    printf("(!(%d<10))=%s\n",a,!(a<10) ? "TRUE":"FALSE");
    return 0;
}