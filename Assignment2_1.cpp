//Problem Statement:-Accept one number from user and print that number of * on screen

#include<iostream>
using namespace std;

class Printer
{
    public:
        int iNo;

        Printer()
        {
            iNo = 0;
        }

        void StarPrinter(int iNo)
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }
            for(int iCnt = 0;iCnt < iNo;iCnt++)
            {
                cout<<"*\t";
            }
        }
};
int main()
{
    int iValue = 0;

    Printer pobj;

    cout<<"Enter the Number:\n";
    cin>>iValue;
    
    pobj.StarPrinter(iValue);

    return 0;
}