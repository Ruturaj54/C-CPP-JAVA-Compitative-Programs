
// 4.Write a recursive program which display below pattern. 
// Output : A B C D E F

#include<stdio.h>
void DisplayR(int iNo)
{
   static int i = 0;
   static char Ch = 'A';
   if(i != iNo)
   {
      printf("%c\t",Ch);
      i++;
      Ch++;
      DisplayR(iNo);

   }
}

int main()
{
   DisplayR(6);
   return 0;
}