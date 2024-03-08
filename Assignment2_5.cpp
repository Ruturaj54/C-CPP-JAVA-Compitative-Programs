//Accept the number from user and check it is even or odd
#include<iostream>
#include<stdlib.h>
using namespace std;

class Demo
{
  public:
    int iNo1;

    Demo()
    {
      iNo1 = 0;
    }

    bool CheckEvenOdd(int iNo1)
    {
      if(iNo1 % 2 == 0)
      {
        return  true;
      }
      else
      {
        return false;
      }
    }

};
int main()
{
  int iValue1 = 0;
  bool bRet = false;

  cout<<"Enter the Number:";
  cin>>iValue1;

  Demo *ptr = NULL;

  Demo obj;
  ptr = &obj;

  bRet = ptr->CheckEvenOdd(iValue1);

  if(bRet == true)
  {
    cout<<"It is Even Number...";
  }
  else
  {
    cout<<"It is Odd Number...";
  }

  return 0;
}