//5. Accept number of rows and number of columns from user and display below 
//pattern.
//Input : iRow = 4 iCol = 4
//Output : 
//1 2 3 4       11,12,13,14
//1 * * 4       21,22,23,24
//1 * * 4       31,32,33,34
//1 2 3 4       41,42,43,44

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    
    for(i = 1;i <= iRows;i++) //outer
    {
        for(j = 1;j <= iColumns;j++)//inner
        {
            if((j == 1)) 
            {
                printf("1\t");
            }
            else if((i == 1) || (i == iRows))
            {
                printf("%d\t",j);
            }
            else if(j == iColumns)
            {
                printf("%d\t",iColumns);
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
