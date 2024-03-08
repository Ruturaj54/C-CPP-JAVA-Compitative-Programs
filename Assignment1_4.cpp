//Accept the Number from user and display wether it is divisible by  5 or not

#include<iostream>
using namespace std;

class Checker
{
    public:
        int iNo;

        Checker()
        {
            iNo = 0;
        }

        bool DivisibleByFive(int iNo)
        {
            if(iNo % 5 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    int iValue = 0;
    bool bAns = false;

    cout<<"Enter the Number:";
    cin>>iValue;
    Checker cobj;
    bAns = cobj.DivisibleByFive(iValue);

    if(bAns == true)
    {
        cout<<"Divisible by 5..\n";
    }
    else
    {
        cout<<"Not Divisible By 5..\n";
    }
    return 0;
}