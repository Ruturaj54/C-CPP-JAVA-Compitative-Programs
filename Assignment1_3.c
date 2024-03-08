//3. Program to print 5 to 1 numbers on screen.
//Step 1.Understand the problem statement
//Conclusion:- To display the 5 to 1 numbers
//Step 2.Algorithm
/*
  1.START
    2.Create the Display function which prints the 5 to 1 numbers there
    3.Make the integer variable i which holds the 5 value
    4.use for loop and then display the 5 to 1 values
    5.call the Display function from the entry point function
  6.STOP
*/

//Step 3. Selct the programming language
//Selcted the c programming language

//Step 4.Write the program

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//  Function Name:      Display
//  Description:        It is used to display 5 to 1 numbers 
//  Input arguments:    Integer
//  Output:             54321
//  Author:             Ruturaj Ramchandra Dharne
//  Date  :             8/10/2023   
///////////////////////////////////////////////////////////////////////

void Display()
{
  register int i = 5;

    for(i = 5;i >= 1;i--)
    {
      printf("%d",i);  
    }
}
///////////////////////////////////////////////////////////////////////
//
//  Entry point function.
//
///////////////////////////////////////////////////////////////////////
int main()
{
  Display();
  return 0;
}

/*
Test case1:
input:-5
output:-54321
*/