
// 3.Write a recursive program which display below pattern. 
// Output : 5 4 3 2 1

#include<stdio.h>
void DisplayR(int iNo)
{
   static int i = iNo;
   if(i != 0)
   {
      printf("%d\t",i);
      i--;
      DisplayR(iNo);

   }
}

int main()
{
   DisplayR(5);
   return 0;
}