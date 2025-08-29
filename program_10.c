//search engine to perform linear search and binary search on an array of book ids

#include<stdio.h>
#include<string.h>

int main()
{
    printf("ENTER THE NUMBER OF BOOKS : ");
    int n;scanf("%d",&n);getchar();


    printf("ENTER BOOK IDs ONE BY ONE :\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
       printf("BOOK %d : ",i+1);
       scanf("%d",&arr[i]);getchar();
    }

repeat:
    printf("\nENTER THE BOOK ID OF THE BOOK YOU WANT TO SEARCH FOR OR ENTER -1 TO EXIT : ");
    int book;scanf("%d",&book);getchar();

    if(book==-1){return 0;}
    
    printf("\nENTER 1 FOR PERFORMING LINEAR SEARCH AND 2 FOR BINARY SEARCH\n");
    int ch;scanf("%d",&ch);getchar();


    switch(ch)
    {
    case 1://linear search
    {
        int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==book)
        {
        printf("\nBOOK FOUND!!\n");count++;
        printf("AT POSITION %d",i+1);
        }
    }
    if(count==0)
    printf("BOOK NOT FOUND!!");
    break;
}
    
    
    case 2://binary search
    {
        printf("\nBINARY SEARCH RETURNS THE SORTED POSITION SO IT MAYBE DIFFERENT FROM THE ENTERED ORDER\n");
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]) {
                int t=arr[j]; arr[j]=arr[j+1]; arr[j+1]=t;
            }
    int start=0,end=n-1,mid=(start+end)/2;int count=0;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==book)
        {
            printf("\nBOOK FOUND!!\n");count++;
            printf("AT POSITION %d",mid+1);break;
        }
        if(book<arr[mid])
        {
            end=mid-1;
        }
        if(book>arr[mid])
        {
            start=mid+1;
        }
    }
    if(count==0)
    printf("BOOK NOT FOUND!!");
    break;
}

    default : printf("INVALID INPUT\n");
    }
    goto repeat;
    return 0;

}