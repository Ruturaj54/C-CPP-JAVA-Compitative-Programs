//Problem Statement:Accept one character from user and conver its case
//Step 1.Understand the problem statement: Accept the character from user and convert it case

//Step 2.Algorithm:
/*
  START
    Create the variable which store the cvalue entered by user 
    Create the function which displays the case conversion of that cValue
  STOP

*/
//Step 3.Select the programming language 
//I selected the c programming

//Step 4.Write the program

#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name:      CharacterConvert
//  Description:        It is used to display the even factors of that number
//  Input arguments:    Character
//  Output:             Displays the upper or lower case
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             11/10/2023   
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void CharacterConvert(char Ch)
{
  if(Ch>='a' && Ch<='z')
  {
    Ch = Ch - 32;
    printf("Uppercase of Entered char is: %c",Ch);
  }
  else
  {
    Ch = Ch + 32;
    printf("Lowercase of Entered char is: %c",Ch);

  }
  
}
///////////////////////////////////////////////////////////////////////
//
//  Entry point function.
//
///////////////////////////////////////////////////////////////////////


int main()
{
    auto char cValue = '\0';
    
    printf("Enter the Alphabet:");
    scanf("%c",&cValue);

    CharacterConvert(cValue);

    return 0;
}

//Time Complexity: O(1)

/*
Test Case 1:
Input: A
Output: a 

Test Case 2:
Input: b
Output: B
*/