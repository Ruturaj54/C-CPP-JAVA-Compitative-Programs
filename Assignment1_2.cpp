//Write a program to print 5 times RRD technologies

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

        void Display(int iCnt = 5)
        {
            for(iCnt = 0;iCnt < 5;iCnt++)
            {
                cout<<"RRD Technologies...\n";
            }
        }
};

int main()
{
    Printer pobj1;

    int i = 0;

    cout<<"Do You Want to Print RRD Technologies 5 Times? :"<<"\n"<<"1.Yes"<<"\n"<<"2.No"<<"\n";
    cin>>i;

    switch(i)
    {
        case 1:
            pobj1.Display();
            break;
        case 2:
            cout<<"Thanks You...\n";
            break;
        default:
            cout<<"Enter valid input..";

    }


    return 0;
}