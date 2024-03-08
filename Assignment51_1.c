
// 1. Write a recursive program which display below pattern. 
// Output : * * * * *

#include<stdio.h>
void DisplayR(int iNo)
{
   static int i = 0;
   if(i != iNo)
   {
      printf("*\t");
      i++;
      DisplayR(iNo);

   }
}

int main()
{
   DisplayR(5);
   return 0;
}