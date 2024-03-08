// 5. Write a recursive program which accept number from user and return its 
// product of digits. 
// Input : 523
// Output : 30

#include<stdio.h>
#include<iostream>
using namespace std;

int DigitProductI(int iNo)
{
   int idigit = 1;
   int iMult = 1;

   while(iNo != 0)
   {
        idigit = iNo % 10;
        if(idigit == 0)
        {
         idigit = 1;
        }
        iMult = idigit * iMult;
        iNo = iNo / 10;
   }
   return iMult;
}

int DigitProductR(int iNo)
{
   int idigit = 1;
   static int iMult = 1;

   if(iNo != 0)
   {
        idigit = iNo % 10;
        if(idigit == 0)
        {
         idigit = 1;
        }
        iMult = idigit * iMult;
        iNo = iNo / 10;
        DigitProductR(iNo);
   }
   return iMult;
}



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value To find the product of Digits in it : \n");
    scanf("%d",&iValue);

    iRet = DigitProductR(iValue);
    printf("Product of all digits in  %d  is : %d\n",iValue,iRet);

    return 0;
}