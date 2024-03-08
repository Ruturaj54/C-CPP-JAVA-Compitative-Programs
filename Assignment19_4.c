//4. Accept number of rows and number of columns from user and display below 
//pattern.
//Input : iRow = 4 iCol = 5
//Output : 
//4 4 4 4 4
//3 3 3 3 3
//2 2 2 2 2
//1 1 1 1 1

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    
    for(i = iRows;i >= 1;i--) //outer
    {
        for(j = 1;j <= iColumns;j++)//inner
        {
            printf("%d\t",i);
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
