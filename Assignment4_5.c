//Problem Statement:-Accept the number from user and display the difference between sumation of nonfactor and factor values
//Step 1.Understand the problem statement:-Accept the integer value from user and display the substraction of sum of non factors and factor 

//Step 2.Algorithm:-
/*
    START
        Create the Variable which Accepts the integer value from user and a variable which will hold the return value from function
        Create the Function which displays the substraction of sumation of non factors,factor values and returns this from function to mainfunction
        Now print the Values 
    STOP
*/
//Step 3.Select the programming Language
//I Selected c programming

//Step 4.Write the program
#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//  Function Name:      DiffofSum
//  Description:        It is used to display the Substarction of Sum of factor and Non factors
//  Input arguments:    Integer
//  Output:             Integer
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             11/10/2023   
///////////////////////////////////////////////////////////////////////
int DiffofSum(int iNo)
{
    auto int iCnt = 0;
    auto int iSumFact = 0;
    auto int iSumNonFact = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    for(iCnt = 1;iCnt <= iNo/2 ;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
    }

    return iSumFact-iSumNonFact;
}
///////////////////////////////////////////////////////////////////////
//
//  Entry point function.
//
///////////////////////////////////////////////////////////////////////

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the value:");
    scanf("%d",&iValue);

    iRet = DiffofSum(iValue);

    printf("Difference is: %d",iRet);
    
    return 0;
}

//Time complexity:- O(N-1 + N/2)

/*
Test Case1:
Input:-12
output: -34

Test Case 2:
Input:-10
Output: -29

Test Case 3:
Input:- 25
output:- -288

*/
