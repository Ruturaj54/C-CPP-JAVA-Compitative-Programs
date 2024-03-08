//Problem Statement:-Accept the one number from user and print that number of stars here
//Step 1.Understand the problem statement
//Conclusion:- Take integer as input from user and Display the numner of starts

//Step 2.Algorithm
/*
  1.START
    2.Create the integer variable as a iValue in main function
    3.Create the Accept function which take 1 integer parameter in it
    4.Create for loop and display the No of starts there as per the accepted parameter
  5.STOP
*/

//Step 3. Select the programming language ,I selected c programming

//Step 4.Write the program

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////
//  Function Name:      Accept
//  Description:        It is used to display the Stars as same as iValue
//  Input arguments:    Integer
//  Output:             *(Stars)
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             8/10/2023   
///////////////////////////////////////////////////////////////////////////
void Accept(int iNo)
{
  int iCnt = 0;
  
  for(iCnt = 0;iCnt<iNo;iCnt++)
  {
    printf("*");
  }
}
///////////////////////////////////////////////////////////////////////
//
//  Entry point function.
//
///////////////////////////////////////////////////////////////////////
int main()
{
  int iValue = 0;
  iValue = 5;

  Accept(iValue);

  return 0;
}
/*
Test case1:-
Input :- 5
output:- *****
*/