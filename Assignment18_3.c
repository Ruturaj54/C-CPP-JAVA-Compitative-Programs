//3. Accept number of rows and number of columns from user and display 
//below pattern.
//Input : iRow = 3 iCol = 5
//Output : 5 4 3 2 1
//         5 4 3 2 1
//         5 4 3 2 1

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    
    for(i = 1;i <= iRows;i++)
    {
        for(j = iColumns;j >= 1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
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
