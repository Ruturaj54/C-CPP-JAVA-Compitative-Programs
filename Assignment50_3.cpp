// 3. Write a recursive program which accept string from user and count number 
// of small characters.
// Input : HElloWOrlD
// Output : 5

#include<stdio.h>
#include<iostream>
using namespace std;

int CalSmallAlphaI(char *Arr)
{
   int i = 0;
   int iCnt = 0;
   while(Arr[i] != '\0')
   {
      if(Arr[i] >= 'a' && Arr[i] <= 'z')
      {
         iCnt++;    
      }
      i++;
   }
   return iCnt;
}

int CalSmallAlphaR(char *Arr)
{
   static int i = 0;
   static int iCnt = 0;
   if(Arr[i] != '\0')
   {
       if(Arr[i] >= 'a' && Arr[i] <= 'z')
      {
         iCnt++;    
      }
      i++;
      CalSmallAlphaR(Arr);
   }
   return iCnt;
}

int main()
{
   char Str[20];
   int iRet = 0;

   printf("Enter the String here : \n");
   scanf("%[^'\n']s",Str);

   iRet = CalSmallAlphaR(Str);
   printf("Number of Small letters in the Entered String is : %d\n",iRet);

   return 0;
}