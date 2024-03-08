//Problem Statement:-Accept the number from user and display the non factors values
//Step 1.Understand the problem statement:-Accept the integer value from user and display the non factors 

//Step 2.Algorithm:-
/*
    START
        Create the Variable which Accepts the integer value from user
        Create the Function which displays the non factors values
        Now print the Values 
    STOP
*/
//Step 3.Select the programming Language
//I Selected c programming

//Step 4.Write the program
#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//  Function Name:      NonFact
//  Description:        It is used to display the non factors of a number
//  Input arguments:    Integer
//  Output:             Integer(Used for displaying non factor numbers)
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             11/10/2023   
///////////////////////////////////////////////////////////////////////
void NonFact(int iNo)
{
    auto int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
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

    NonFact(iValue);
    
    return 0;
}

//Time complexity:- O(N-1)

/*
Test Case1:
Input:-12
output:-5 7 8 9 10 11

Test Case 2:
Input:-13
Output:- 2 3 4 5 6 7 8 9 10 11 12

Test Case 3:
Input:- -10
output:- 3 4 6 7 8 9

*/
