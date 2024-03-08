
// 2. Write a recursive program which display below pattern. 
// Output : 1 2 3 4 5

#include<stdio.h>
void DisplayR(int iNo)
{
   static int i = 1;
   if(i != iNo+1)
   {
      printf("%d\t",i);
      i++;
      DisplayR(iNo);

   }
}

int main()
{
   DisplayR(5);
   return 0;
}