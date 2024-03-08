//2. Accept number of rows and number of columns from user and display 
//below pattern.
//Input : iRow = 4 iCol = 4
//Output : 
//2 4 6 8 10
//1 3 5 7 9
//2 4 6 8 10
//1 3 5 7 9

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    int iVar = 2;
    int iOddVar = 1;
    
    for(i = 1;i <= iRows;i++) //outer
    {
        for(j = 1;j <= iColumns;j++)//inner
        {
            if(iVar > (2*iColumns))
            {
                iVar = 2;
            }

            if(iOddVar > (2*iColumns - 1))
            {
                iOddVar = 1;
            }
            
            if(i % 2 != 0)
            {
                printf("%d\t",iVar);
                iVar = iVar + 2;
            }
            else if(i % 2 == 0)
            {
                
                printf("%d\t",iOddVar);
                iOddVar = iOddVar + 2;
                
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
