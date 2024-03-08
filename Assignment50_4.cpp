// 4. Write a recursive program which accept number from user and return 
// smallest digit
// Input : 87983
// Output : 3


#include<stdio.h>
#include<iostream>
using namespace std;

int SmallDigitI(int iNo)
{
   int iSmall = iNo % 10;
   int idigit = 0;

   while(iNo != 0)
   {
      idigit = iNo % 10;

      if(idigit < iSmall)
      {
         iSmall = idigit;
      }
      iNo = iNo / 10;

   }
   return iSmall;
}

int SmallDigitR(int iNo)
{
   static int iSmall = iNo % 10;
   int idigit = 0;

   if(iNo != 0)
   {
      idigit = iNo % 10;

      if(idigit < iSmall)
      {
         iSmall = idigit;
      }
      iNo = iNo / 10;
      SmallDigitR(iNo);

   }
   return iSmall;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter the Number here : \n");
   scanf("%d",&iValue);

   iRet = SmallDigitR(iValue);
   printf("Smallest digit from the %d  is : %d",iValue,iRet);

   return 0;
}