//2. Write a program which checks whether 5th & 18th bit is On or OFF. 

#include<iostream>
using namespace std;

class BitOpration
{
    public:
        int iNo;
        int iMask;
        int iResult;

        BitOpration(int A)
        {
            iNo = A;
            iMask = 0X00020010;
            iResult = 0;
        }

        bool ChkBit()
        {
            iResult = iNo & iMask;

            if(iMask == iResult)
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
    bool bRet = false;
    int iValue = 0;

    cout<<"Enter the Number Here : \n";
    cin>>iValue;
    
    BitOpration obj(iValue);

    bRet = obj.ChkBit();

    if(bRet == true)
    {
        cout<<"5th and 18th Bit is ON....\n";
    }
    else
    {
        cout<<"5th and 18th Bit is OFF....\n";
    }

    return 0;
}