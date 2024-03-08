//Problem Statement:-program to divide two numbers
//Step 1.Understand the problem statements
//Conclusion:- Take integer type data from user and return float type

/*Step 2.Algorithm:-
    1.START
        2.Make 2 integers variables iValue1,iValue2
        3.Make 1 float variable iRet to store the return value from Divide function
        4.Create the function named Divide which accepts the 2 integers and returns the float result
        5.Create the if statements which makes sure that iNo1 should be greater than iNo2
    6.STOP
*/
//Step 3.Choose the programming language
//c,c++,java,python
//Conclusion :-I selected the c programming

//Step 4.Write the program

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//  Function Name:      Division
//  Description:        It is used to perform division of 2 integers
//  Input arguments:    Integer,Integer
//  Output:             Float
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             8/10/2023   
///////////////////////////////////////////////////////////////////////

float Divide(int iNo1, int iNo2)
{
auto float iAns = 0.0f;
if(iNo1 < iNo2)
{
    return -1;
}
iAns = iNo1 / iNo2;

return iAns;
}

///////////////////////////////////////////////////////////////////////
//
//  Entry point function.
//
///////////////////////////////////////////////////////////////////////
int main()
{
auto int iValue1 = 15, iValue2 = 5;
auto float iRet = 0.0f;
iRet = Divide(iValue1,iValue2);

printf("Division is : %f", iRet);
return 0;
}

/*
Test case1.
input:- 15,5
output:-3.00
*/