//Accept on number from user if number is less than 10 then print " HEllo"otherwise print "Demo"

#include<iostream>
using namespace std;

class Demo
{
  public:
    int iNo;

    Demo()
    {
      iNo = 0;
    }
    void Display(int iNo)
    {
      if(iNo < 10)
      {
        cout<<"Hello\n";
      }
      else
      {
        cout<<"Demo\n";
      }
    }
};

int main()
{
  int iValue = 0;

  cout<<"Enter the Number:\n";
  cin>>iValue;

  Demo dobj;

  dobj.Display(iValue);


  return 0;
}