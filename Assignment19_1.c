//1. Accept number of rows and number of columns from user and display below 
//pattern.
//Input : iRow = 4 iCol = 4
//Output :
//A B C D
//A B C D
//A B C D
//A B C D

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    char Ch = '\0';
    
    for(i = 1;i <= iRows;i++) //outer
    {
        for(j = 1,Ch = 'A';j <= iColumns;j++,Ch++)//inner
        {
            printf("%c\t",Ch);  
        }
        printf("\n\n");
    }
   
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the Number of Columns :\n");
    scanf("%d",&iValue2);

    
    Display(iValue1,iValue2);

    return 0;
}
//time complexity :- O(2N)
