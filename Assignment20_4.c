//4. Accept number of rows and number of columns from user and display 
//below pattern.
//Input : iRow = 5 iCol = 5
//Output : 1 2 3 4 5
//-1 -2 -3 -4 -5
// 1 2 3 4 5
//-1 -2 -3 -4 -5
// 1 2 3 4 5. Accept number of rows and number of columns from user and display 

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    int iVar = 0;
    int iVarx = 0;
    
    for(i = 1;i <= iRows;i++) //outer
    {
        for(j = 1,iVar = 1,iVarx = 1;j <= iColumns;j++)//inner
        {
            if(i % 2 == 0)
            {
                printf("%d\t",-(iVarx++));
                
            }
            else
            {
                printf("%d\t",iVar++);
                
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
