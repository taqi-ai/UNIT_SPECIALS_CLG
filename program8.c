
//program to store a list of 10 items with add/delete/display options

#include<stdio.h>
#include<string.h>

int main()
{
    char str[10][50];
    for(int i=0;i<10;i++){strcpy(str[i],"");}

runagain:

    printf("\nENTER YOUR CHOICE\n");
    printf("PRESS 0 TO EXIT THE PROGRAM\n");
    printf("PRESS 1 TO ADD AN ITEM TO THE LIST\n");
    printf("PRESS 2 TO DELETE AN ITEM FROM THE LIST\n");
    printf("PRESS 3 TO DISPLAY ALL THE ITEMS IN THE LIST\n\n");
    int choice;scanf("%d",&choice);getchar();

    if(choice==0)
    {
        printf("EXITING...");
        return 0;
    }

    switch(choice)
    {
        case 1:
        printf("ENTER POSITION AT WHICH YOU WANT TO STORE THE ELEMENT\n");
        int pos;scanf("%d",&pos);
        printf("ENTER THE ITEM %d : ",pos);getchar();
        fgets(str[pos-1],sizeof(str[pos-1]),stdin);
        str[pos-1][strcspn(str[pos-1],"\n")]='\0';
        if(strcmp(str[pos-1],"")==0)
        printf("ERROR ADDING THE ITEM\n");
        else
        printf("ITEM ADDED SUCCESSFULLY\n");
        break;

        case 2:
        printf("ENTER THE POSITION FROM WHERE YOU WANT TO DELETE THE ELEMENT\n");
        int position;scanf("%d",&position);
        strcpy(str[position-1],"");
        if(strcmp(str[position-1],"")==0)
        printf("ITEM DELETED SUCCESSFULLY\n");
        else
        printf("ERROR DELETING ITEM\n");
        break;



        case 3:
        printf("THE ITEMS ARE SAVED AS :\n");
        for(int i=0;i<10;i++)
        {
            printf("ITEM %d : %s\n",i+1,str[i]);
        }
        break;


        default:printf("INVALID INPUT");
    }
    goto runagain;
}