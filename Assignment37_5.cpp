//5. Write a program which checks whether first and last bit is On or 
//OFF. First bit means bit number 1 and last bit means bit number 32. 

#include<iostream>
using namespace std;

class BitOpration
{
    public:
        long int iNo;
        int iMask;
        int iResult;

        BitOpration(int A)
        {
            iNo = A;
            iMask = 0X80000001;
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
    long int iValue = 0;

    cout<<"Enter the Number Here : \n";
    cin>>iValue;
    
    BitOpration obj(iValue);

    bRet = obj.ChkBit();

    if(bRet == true)
    {
        cout<<"1st and last Bit is ON...\n";
    }
    else
    {
        cout<<"1st and last Bit is Off...\n";
    }

    return 0;
}