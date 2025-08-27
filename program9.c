/*PROGRAM TO INPUT TWO MATRICES OF ORDER 3X3
AND PRINT THEIR SUM,DIFFERENCE,PRODUCT OR TRANSPOSE AS PER ASKED 
THE USER*/

#include<stdio.h>

int main()
{
    printf("\n-----MATRIX CALCULATIONS-----\n");
    printf("ENTER TWO MATRICES OF ORDER 3X3\n");
    int arr1[3][3],arr2[3][3];

    //array 1 input
    printf("ENTER THE ELEMENTS OF ARRAY 1\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("ENTER ELEMENT R%d C%d : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    //array 2 input
    printf("\nENTER THE ELEMENTS OF ARRAY 2\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("ENTER ELEMENT R%d C%d : ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

    //displaying the two arrays 
    printf("\nARRAY 1 IS:\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nARRAY 2 IS:\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

runagain:

    //choice
    printf("\n-----ENTER YOUR CHOICE-----\n");
    printf("ENTER 0 TO EXIT THE PROGRAM\n");
    printf("ENTER 1 TO ADD THE TWO MATRICES\n");
    printf("ENTER 2 TO SUBTRACT THE SECOND MATRIX FROM THE FIRST ONE\n");
    printf("ENTER 3 TO PRINT PRODUCT OF THE TWO MATRICES\n");
    printf("ENTER 4 TO PRINT TRANSPOSE OF THE TWO MATRICES\n\n");
    int ch;scanf("%d",&ch);getchar();

    //exit
    if(ch==0)
    {
        printf("\nEXITING THE PROGRAM\n");printf(" \n");
        return 0;
    }

    switch(ch)
    {
    case 1://ADDITION
    {
       int add[3][3];
       for(int i=0;i<3;i++)
           for(int j=0;j<3;j++)
               add[i][j]=arr1[i][j]+arr2[i][j];
       printf("\nTHE ADDED ARRAY IS:\n\n");
       for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
       printf(" \n");
       break;
    } 

    case 2://SUBTRACTION
    {
       int subtract[3][3];
       for(int i=0;i<3;i++)
           for(int j=0;j<3;j++)
               subtract[i][j]=arr1[i][j]-arr2[i][j];
       printf("\nTHE ARRAY AFTER SUBTRACTION IS:\n\n");
       for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",subtract[i][j]);
        }
        printf("\n");
    }
       printf(" \n");
       break;
    } 
    

    case 3://MULTIPLICATION
    {
    int product[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            product[i][j]=(arr1[i][0]*arr2[0][j])+(arr1[i][1]*arr2[1][j])+(arr1[i][2]*arr2[2][j]);
        }
    }
    printf("\nTHE PRODUCT ARRAY OF THE TWO ENTERED ARRAYS IS:\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    printf(" \n");
    break;
    }


    case 4://TRANSPOSE
    {
    int transpose1[3][3],transpose2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
              transpose1[i][j]=arr1[j][i];
              transpose2[i][j]=arr2[j][i];
        }   }
    printf("\nTRANSPOSE OF ARRAY 1 IS:\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",transpose1[i][j]);
        }
        printf("\n");
    }
        printf("\nTRANSPOSE ARRAY 2 IS:\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",transpose2[i][j]);
        }
        printf("\n");
    }
       printf(" \n");
       break;
    }

    default : printf("INVALID INPUT");
    }
    goto runagain;
}