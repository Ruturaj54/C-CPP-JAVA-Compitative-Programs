//Print the number of stars as number is entered by the user
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

        void DisplayStar(int iNo)
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }
            for(int i = 0;i < iNo;i++)
            {
                cout<<"*\n";
            }
        }
};

int main()
{
    int iValue;
    Printer pobj;

    cout<<"Enter the Number:\n";
    cin>>iValue;

    pobj.DisplayStar(iValue);

    return 0;
}