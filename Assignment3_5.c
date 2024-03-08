//Problem Statement:Check weather the following character is Vovel or Not and Return True if Vovel else False
//Step 1.Understand the problem statement: Accept the character from user and return true or false

//Step 2.Algorithm:
/*
  START
    Create the variable which store the character entered by user 
    Create the function which returns true or false if its is vovel
    Create a ret variable in main function which will accept the return value from faunction
    Display the result on screen
  STOP

*/
//Step 3.Select the programming language 
//I selected the c programming

//Step 4.Write the program

#include<stdio.h>
#include<stdbool.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name:      CheckVovel
//  Description:        It is used to Check if the aplha is vovel or not Vovel
//  Input arguments:    Character
//  Output:             Character
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             11/10/2023   
///////////////////////////////////////////////////////////////////////////////////////////////////////////
bool CheckVovel(char iCh)
{
   if(iCh == 'a'||iCh == 'A'||iCh == 'e'||iCh == 'E'||iCh == 'i'||iCh == 'I'||iCh == 'o'||iCh == 'O'||iCh == 'u'||iCh == 'U')
   {
    return true;
   }
   else
   {
    return false;
   }
}
///////////////////////////////////////////////////////////////////////
//
//  Entry point function.
//
///////////////////////////////////////////////////////////////////////

int main()
{
    auto char cAlpha = '\0';
    bool cRet = false;
    
    printf("Enter the Alphabet:");
    scanf("%c",&cAlpha);

    cRet = CheckVovel(cAlpha);

    if(cRet==true)
    {
      printf("%c is Vovel\n",cAlpha);
    }
    else
    {
      printf("%c is not Vovel\n",cAlpha);
    }

    return 0;
}

//Time Complexity: O(1)

/*
Test Case 1:
Input: A
Output: A is Vovel

Test Case 2:
Input: d
Output: d is not Vovel 

Test Case 3:
Input : e
Output: it is Vovel
*/