//5. Accept number from user and display below pattern.
//Input : 8
//Output : 2 4 6 8 10 12 14 16

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    iNo = (iNo * 2);

    for(iCnt = 2;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
        printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number ::\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
//time complexity :- O(N)
