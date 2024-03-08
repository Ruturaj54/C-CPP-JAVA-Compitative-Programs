//Problem Statement:-Accept the number from user and display the sumation of non factors
//Step 1.Understand the problem statement:-Accept the integer value from user and display the sum of non factors 

//Step 2.Algorithm:-
/*
    START
        Create the Variable which Accepts the integer value from user
        Create the Function which displays the sum of non factors and return this from function to mainfunction
        Now print the Values 
    STOP
*/
//Step 3.Select the programming Language
//I Selected c programming

//Step 4.Write the program
#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//  Function Name:      NonFactSum
//  Description:        It is used to display the Sum of non Factor 
//  Input arguments:    Integer
//  Output:             Integer(Used for displaying sum of non factor numbers)
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             11/10/2023   
///////////////////////////////////////////////////////////////////////
int NonFactSum(int iNo)
{
    auto int iCnt = 0;
    auto int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
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

    iRet = NonFactSum(iValue);

    printf("Sum of Non Factor NO: %d",iRet);
    
    return 0;
}

//Time complexity:- O(N-1)

/*
Test Case1:
Input:-12
output:-50

Test Case 2:
Input:-10
Output:- 37

Test Case 3:
Input:- -100
output:- 4833

*/
