// 1. Write a recursive program which accept string from user and count white 
// spaces.
// Input : HE llo WOr lD
// Output : 3

#include<stdio.h>
#include<iostream>
using namespace std;
int CalWhiteSpaceI(char *Arr)
{
   int i = 0;
   int iCnt = 0;
   while(Arr[i] != '\0')
   {
      if(Arr[i] == ' ')
      {
         iCnt++;
         
      }
      i++;
   }
   return iCnt;
}

int CalWhiteSpaceR(char *Arr)
{
   static int i = 0;
   static int iCnt = 0;
   if(Arr[i] != '\0')
   {
      if(Arr[i] == ' ')
      {
         iCnt++;
      }
      i++;
      CalWhiteSpaceR(Arr);
   }
   return iCnt;
}

int main()
{
   char Str[20];
   int iRet = 0;

   printf("Enter the String here : \n");
   scanf("%[^'\n']s",Str);

   iRet = CalWhiteSpaceR(Str);
   printf("Number of white spaces in the Entered String is : %d\n",iRet);

   return 0;
}