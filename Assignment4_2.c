//Problem Statement:-Accept the number from user and display the factors in decreasing order
//Step 1.Understand the problem statement:-Accept the integer value from user and display the factors in decreasing orde

//Step 2.Algorithm:-
/*
    START
        Create the Variable which Accepts the integer value from user
        Create the Function which displays the factors in decreasing order
        Now print the Values 
    STOP
*/
//Step 3.Select the programming Language
//I Selected c programming

//Step 4.Write the program
#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//  Function Name:     FactRev
//  Description:        It is used to display the factors in reverse order
//  Input arguments:    Integer
//  Output:             Integer(Factors in reverse order)
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             11/10/2023   
///////////////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
    auto int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo/2;iCnt >= 1;iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
///////////////////////////////////////////////////////////////////////
//
//  Entry point function.
//
///////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0;

    printf("Enter the value:");
    scanf("%d",&iValue);

    FactRev(iValue);
    
    return 0;
}

//Time complexity:- O(N/2)

/*
Test Case1:
Input:-12
output:-6 4 3 2 1

Test Case 2:
Input:-13
Output:-1

Test Case 3:
Input:- -10
output:- 5 2 1

*/
