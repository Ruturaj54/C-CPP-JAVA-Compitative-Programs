//4. Accept number of rows and number of columns from user and display below 
//pattern.
//Input : iRow = 6 iCol = 5
//Output : 
//* * * * *     11,12,13,14,15
//* @ @ @ *     21,22,23,24,25
//* @ @ @ *     31,32,33,34,35
//* @ @ @ *     41,42,43,44,45
//* @ @ @ *     51,52,53,54,55
//* * * * *     61,62,63,64,65

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    
    for(i = 1;i <= iRows;i++) //outer
    {
        for(j = 1;j <= iColumns;j++)//inner
        {
            if((i == 1) || (j == 1) || (i == iRows) || (j == iColumns)) 
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
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
