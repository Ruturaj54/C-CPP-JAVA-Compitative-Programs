//3. Accept number of rows and number of columns from user and display 
//below pattern.
//Input : iRow = 5 iCol = 5
//Output : a b c d e
//1 2 3 4 5
//a b c d e
//1 2 3 4 5
//a b c d e

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    int iVar = 0;
    char Ch = '\0';
    
    for(i = 1;i <= iRows;i++) //outer
    {
        for(j = 1,Ch = 'a',iVar = 1;j <= iColumns;j++)//inner
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iVar++);
            }
            else
            {
                printf("%c\t",Ch++);
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
