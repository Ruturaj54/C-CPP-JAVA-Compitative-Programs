//3. Accept number of rows and number of columns from user and display below 
//pattern.
//Input : iRow = 3 iCol = 5
//Output : A A A A A
//B B B B B
//C C C C C

#include<stdio.h>

void Display(int iRows,int iColumns)
{
    int i = 0;
    int j = 0;
    char Ch = '\0';
    
    for(i = 1,Ch = 'A';i <= iRows;i++,Ch++) //outer
    {
        for(j = 1;j <= iColumns;j++)//inner
        {
            printf("%c\t",Ch);
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
