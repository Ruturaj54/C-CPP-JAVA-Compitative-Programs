//Program to print 5 to 1 numbers on screen

#include<iostream>
using namespace std;

class Printer
{
    public:
        int iCnt;

        Printer()
        {
            iCnt = 0;
        }

        void Display()
        {
            for(iCnt = 5;iCnt > 0; iCnt--)
            {
                cout<<iCnt<<"\n";
            }
        }

};
int main()
{
    Printer pobj;

    pobj.Display();

    return 0;
}