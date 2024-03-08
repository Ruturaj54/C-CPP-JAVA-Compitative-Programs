//Problem Statement:2. Accept character from user. If character is small display its 
//corresponding capital character, and if it small then display its 
//corresponding capital. In other cases display as it is.
//Input : Q
//Output : q
//Input : m
//Output : M
//input : 4
//Output : 4
//Input : %
//Output : %

#include<iostream>
using namespace std;

class Printer
{
    private:
        char Ch;
    public:
        Printer(char X)
        {
            Ch = X;
        }
        char Display()
        {
            if(Ch >= 'a' && Ch <='z')
            {
                return (Ch - 32);
            }
            else if(Ch >= 'A' && Ch <= 'Z')
            {
                return (Ch + 32);
            }
            else if(Ch > 'z' || (Ch > 'Z' && Ch < 'a') || Ch < 'A' )
            {
                cout<<"Please enter Alphabet only....\n";
                return Ch;
            }
        }
    
};

int main()
{
    char cRet = '\0';
    char CValue = '\0';

    cout<<"Enter the charcter : ";
    cin>>CValue;

    Printer pobj(CValue);
    cRet = pobj.Display();

    cout<<"Corresponding Character is : "<<cRet;

    return 0;
}