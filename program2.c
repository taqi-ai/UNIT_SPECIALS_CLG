//DISPLAYS THE REULT OF THREE SUBJECTS BY TAKING NECESSARY INPUT FROM THE USER

#include<stdio.h>
#include<string.h>

int main()
{
    printf("----------RESULT CALCULATOR---------\n");
    printf("ENTER THE NAME OF FIRST SUBJECT:");
    char s1[50];char s2[50];char s3[50];
    fgets(s1,sizeof(s1),stdin);s1[strcspn(s1,"\n")]='\0';
    printf("ENTER THE NAME OF SECOND SUBJECT:");
    fgets(s2,sizeof(s2),stdin);s2[strcspn(s2,"\n")]='\0';
    printf("ENTER THE NAME OF THIRD SUBJECT:");
    fgets(s3,sizeof(s3),stdin);s3[strcspn(s3,"\n")]='\0';
    int m1,m2,m3;
    printf("ENTER MARKS IN %s:",s1);
    scanf("%d",&m1);
    printf("ENTER MARKS IN %s:",s2);scanf("%d",&m2);
    printf("ENTER MARKS IN %s:",s3);scanf("%d",&m3);
    char grade[3];float total=m1+m2+m3;float avg=(total)/3;float percentage=(total/300)*100;
    if(percentage>=90)
    strcpy(grade,"A+");
    else if(percentage>=80)
    strcpy(grade,"A");
    else if(percentage>=70)
    strcpy(grade,"B");
    else if(percentage>=60)
    strcpy(grade,"C");
    else if(percentage>=50)
    strcpy(grade,"D");
    else if(percentage>33)
    strcpy(grade,"E");
    else if(percentage<=33)
    strcpy(grade,"F");
    else 
    strcpy(grade,"0");
    printf("\n----------RESULT----------\n");
    printf("%s:%d\n",s1,m1);
    printf("%s:%d\n",s2,m2);
    printf("%s:%d\n\n",s3,m3);
    printf("%-25s %-15s %-15s %-15s\n\n","GRADE","TOTAL","AVERAGE","PERCENTAGE");
    printf("%-25s %-15.2f %-15.2f %-15.2f",grade,total,avg,percentage);
    return 0;
}