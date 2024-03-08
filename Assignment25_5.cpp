//Problem Statement:5. Accept character from user and display its ASCII value in decimal, 
//octal and hexadecimal format.
//Input : A
//Output : Decimal 65
//Octal 0101
//Hexadecimal 0X41

#include<iostream>
using namespace std;

class Checker
{
    private:
        char Ch;
    public:
        Checker(char X)
        {
            Ch = X;
        }
        void DisplayAscii()
        {
            printf("Decimal : %d\n",Ch);
            printf("Octal : %o\n",Ch);
            printf("HexaDecimal : %x\n",Ch);

        }
};

int main()
{
    char CValue = '\0';

    cout<<"Enter the charcter : ";
    cin>>CValue;

    Checker cobj(CValue);
    cobj.DisplayAscii();

    return 0;
}