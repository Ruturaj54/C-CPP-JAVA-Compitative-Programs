//Problem Statement:-Write program which accepts number from user and diaplay the multiplication of factors.
//Step 1.Understand the problem statement:-Accept the integer value from user and return the multiplication of factors

//Step 2.Algorithm:-
/*
    START
        Create the Varibale which Accepts the integer value from user
        Create the Varibale which will accept the return data from the function
        Create the function whuch has the 1 input parameter and One variable for loop and 1 variable to store the multipilcation
        Return the value from that function and display the output from main function
    STOP
*/
//Step 3.Select the programming Language
//I Selected c programming

//Step 4.Write the program
#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//  Function Name:      MultiFact
//  Description:        It is used to perform the multiplication of factors
//  Input arguments:    Integer
//  Output:             Integer(Multiplication of factors)
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             11/10/2023   
///////////////////////////////////////////////////////////////////////

int MultiFact(int iNo)
{
    auto int iCnt = 0;
    auto int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo/2;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }
    return iMulti;

}

int main()
{
    auto int iValue = 0;
    auto int iRet = 0;

    printf("Enter the value:");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("Multuplication of Factors is: %d\n",iRet);
    
    return 0;
}

//Time complexity:- O(N/2)

/*
Test Case1:
Input:-12
output:-144

Test Case 2:
Input:-13
Output:-1

Test Case 3:
Input:- -10
output:- 10
*/
