//2. Accept number of rows and number of columns from user and display below 
//pattern.
//Input : iRow = 4 iCol = 4
//Output : 
//* * * *       41,42,43,44
//* * * #       31,32,33,34
//* * # #       21,22,23,24
//* # # #       11,12,13,14

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = iRows;
    int j = 0;
    
    for(i = iRows;i >= 1;i--) //outer
    {
        for(j = 1;j <= iColumns;j++)//inner
        {
            if(i == j || i > j) 
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
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
