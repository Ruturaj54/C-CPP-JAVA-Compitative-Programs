//3. Write a program which checks whether 7th & 15th & 21st , 28th bit 
// is On or OFF
#include<iostream>
using namespace std;

class BitOpration
{
    public:
        int iNo;
        long int iMask;
        int iResult;

        BitOpration(int A)
        {
            iNo = A;
            iMask = 0X08104040;
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
        cout<<"7th and 15th and 21th and 28th Bits is ON...\n";
    }
    else
    {
        cout<<"7th and 15th and 21th and 28th Bits is OFF...\n";
    }

    return 0;
}