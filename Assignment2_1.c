//Problem Statement:-Accept one number from user and print that number of * on screen
//Step 1.Understand the problem Statement
//Conclusion:- Enter the integer type value from user and display that number of stars*
//Step 2. Algorithm
/*
  1.START
    2.Create integer which accepts the number from user and store in iCnt
    3.Create the Display function and use for loop which will print the * in it
  4.STOP
*/

//Step 3.Select the programming language
//Step 4.Write the programming

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//  Function Name:      Display
//  Description:        It is used to display the Stars as same as iNo
//  Input arguments:    Integer
//  Output:             *(Stars)
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             8/10/2023   
///////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
  int iCnt = 0;
  if(iNo < 0)
  {
    iNo = (iNo * -1);
  }
  for(iCnt = 0;iCnt < iNo;iCnt++)
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

  printf("Enter number:");
  scanf("%d",&iValue);

  Display(iValue);
  return 0;

}
/*
Test Case1:-
Input:-5
output:-*****

Test Case2:-
Input:-12
output:-************

Test Case3:-
Input: -5
output:- *****

Test Case4:-
Input:-0
output: 
*/