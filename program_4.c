//CELSIUS TO FAHRENHEIT CONVERTER AND VICE VERSA

#include<stdio.h>

int main()
{
    printf("ENTER 1 FOR CELSIUS TO FAHRENHEIT\n");
    printf("ENTER 2 FOR FAHRENHEIT TO CELSIUS\n");
    printf("ENTER 3 TO EXIT PROGRAM\n");
    printf("ENTER YOUR CHOICE\n");
    int n;scanf("%d",&n);float tc;float tf;
switchc:
    switch(n)
    {
        case 1:
        printf("ENTER TEMPERATURE IN DEGREE CELSIUS\n");
        scanf("%f",&tc);
        tf=(((float)9.0/5)*tc)+32;
        printf("TEMPERATURE IN DEGREE FAHRENHEIT IS %.2f DEGREE FAHRENHEIT\n",tf);
        break;

        case 2:
        printf("ENTER TEMPERATURE IN DEGREE FAHRENHEIT\n");
        scanf("%f",&tf);
        tc=(tf-32)*((float)5/9);
        printf("TEMPERATURE IN DEGREE CELSIUS IS %.2f DEGREE CELSIUS\n",tc);
        break;

        case 3:
        goto end;

        default:
        printf("INVALID INPUT\n");
    }
    goto switchc;
end:
    return 0;
}
