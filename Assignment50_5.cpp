// 5. Write a recursive program which accept number from user and return its 
// reverse number. 
// Input : 523
// Output : 325


#include<stdio.h>
#include<iostream>
using namespace std;

int RevDigitI(int iNo)
{
   int idigit = 0;
   int iRev = 0;

   while(iNo != 0)
   {
      idigit = iNo % 10;
      iRev = (iRev * 10) + idigit;
      iNo = iNo / 10;

   }
   return iRev;
}

int RevDigitR(int iNo)
{
   int idigit = 0;
   static int iRev = 0;

   if(iNo != 0)
   {
      idigit = iNo % 10;
      iRev = (iRev * 10) + idigit;
      iNo = iNo / 10;
      RevDigitR(iNo);
   }
   return iRev;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter the Number here : \n");
   scanf("%d",&iValue);

   iRet = RevDigitR(iValue);
   printf("Reverse value from the %d  is : %d",iValue,iRet);

   return 0;
}