//SHOWS A PROFILE SCREEN TO PRINT BASIC STUDENT DETAILS

#include<stdio.h>
#include<string.h>
int main()
{
    printf("ENTER NAME OF A STUDENT:\n");
    char name[50];fgets(name,sizeof(name),stdin);name[strcspn(name,"\n")]='\0';
    printf("ENTER MARKS:\n");
    float marks;scanf("%f",&marks);
    printf("ENTER AGE:\n");int age;
    scanf("%d",&age);
    printf("ENTER ROLL NUMBER:\n");
    int roll;scanf("%d",&roll);
    printf("\n----------PROFILE SCREEN----------\n");
    printf("%-25s %-15s %-15s %-15s\n","NAME","AGE","ROLL NO.","MARKS");
    printf("%-25s %-15d %-15d %-15f",name,age,roll,marks);
    return 0;
}