//5. Accept number of rows and number of columns from user and display 
//below pattern.
//Input : iRow = 4 iCol = 4
//Output : 
//1 2 3 4
//2 3 4 5
//3 4 5 6
//4 5 6 7

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    int iVar = 0;
    
    for(i = 1;i <= iRows;i++) //outer
    {
        for(j = 1,iVar = i;j <= iColumns;j++)//inner
        {
           printf("%d\t",iVar);
           iVar = iVar + 1;
           
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
