//Accept two numbers from user an display first number in second number of times
#include<iostream>
using namespace std;

class Printer
{
  public:
    int iValue1;
    int iValue2;

    Printer()
    {
      iValue1 = 0;
      iValue2 = 0;
    }

    void Display(int iValue1,int iValue2)
    {
      cout<<"Output is:";

      for(int iCnt = 0;iCnt < iValue2;iCnt++)
      {
        cout<<iValue1<<"\t";
      }
    }

};

int main()
{
  int iNo1 = 0;
  int iNo2 = 0;

  cout<<"Enter the number:";
  cin>>iNo1;

  cout<<"Enter the Second number:";
  cin>>iNo2;

  Printer pobj;
  pobj.Display(iNo1,iNo2);

  return 0;
}
