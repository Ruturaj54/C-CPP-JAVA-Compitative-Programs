// 2. Write a recursive program which accept number from user and return 
// largest digit
// Input : 87983
// Output : 9


#include<stdio.h>
#include<iostream>
using namespace std;

int LargestDigitI(int iNo)
{
   int iLarge = iNo % 10;
   int idigit = 0;

   while(iNo != 0)
   {
      idigit = iNo % 10;

      if(idigit > iLarge)
      {
         iLarge = idigit;
      }
      iNo = iNo / 10;

   }
   return iLarge;
}

int LargestDigitR(int iNo)
{
   static int iLarge = iNo % 10;
   int idigit = 0;

   if(iNo != 0)
   {
      idigit = iNo % 10;

      if(idigit > iLarge)
      {
         iLarge = idigit;
      }
      iNo = iNo / 10;
      LargestDigitR(iNo);

   }
   return iLarge;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter the Number here : \n");
   scanf("%d",&iValue);

   iRet = LargestDigitR(iValue);
   printf("Largest digit from the %d  is : %d",iValue,iRet);

   return 0;
}