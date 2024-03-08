// 1.Write a program which accept one number from user and off 7th bit of that 
// number if it is on. Return modified number.

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
            iMask = 0X00000040;
            iResult = 0;
        }

        int OffBit()
        {
            iResult = iNo & iMask;

            if(iResult == iMask) //Bit is On
            {
                return (iNo ^ iMask);
            }
            else//Bit is off
            {
                //cout<<"7th Bit is already Off\n";
                return iNo;
            }
        }


};

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout<<"Enter the Number Here : \n";
    cin>>iValue;

    BitOpration bobj(iValue);
    iRet = bobj.OffBit();

    if(iRet == iValue)
    {
        cout<<"7th Bit was Already off...";
        cout<<"Number is : "<<iRet<<"\n";
    }
    else
    {
        cout<<"Modified Number is : "<<iRet<<"\n";
    }

    return 0;
}

