//4. Accept number of rows and number of columns from user and display 
//below pattern.
//Input : iRow = 3 iCol = 4
//Output : * # * #
//         * # * #
//         * # * #

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    
    for(i = 1;i <= iRows;i++)
    {
        for(j = 1;j <= iColumns;j++)
        {
            if(j % 2 == 0)
            {
                printf("#\t");
            }
            else
            {
            printf("*\t");
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
