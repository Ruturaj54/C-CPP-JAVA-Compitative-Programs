//Problem Statement:Write a program which accept one number from user and print the even factors on screen
//Step 1.Understand the problem statement: Accept the integer from user and then print even factors on screen

//Step 2.Algorithm:
/*
  START
    Create the variable which store the value entered by user 
    Create the function which displays the even numbers of the factors
    Create 
  STOP

*/
//Step 3.Select the programming language 
//I selected the c programming

//Step 4.Write the program

#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name:      DisplayEven
//  Description:        It is used to display the even factors of that number
//  Input arguments:    Integer
//  Output:             Integer
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             11/10/2023   
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void DispayEven(int iNo)
{
    auto int iCnt = 0;
    
    if(iNo <= 0)
    {
       iNo = -iNo;
    }

    for(iCnt = 2;iCnt <= (iNo/2);iCnt++)
    {
      if((iNo % iCnt == 0) && (iCnt % 2 == 0))
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
    
    printf("Enter the number:");
    scanf("%d",&iValue);

    DispayEven(iValue);


    return 0;
}

//Time Complexity: O(N/2)

/*
Test Case 1:
Input: 24
Output: 2 4 6 8 12 

Test Case 2:
Input: 10
Output: 2 

Test Case 3:
Input : -12
Output:2 4 6

Test case 4:
Input: 36
Output:2 4 6 12 18

*/