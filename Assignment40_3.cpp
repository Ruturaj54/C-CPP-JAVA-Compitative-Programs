// 3. Write a program which accept one number from user and check whether 
// 9th or 12th bit is on or off.

#include<iostream>
using namespace std;

class BitOpration
{
    public:
        int iNo;
        int iMask;
        int iMaskx;
        int iResult;
        int iResultx;

        BitOpration(int A)
        {
            iNo = A;
            iMask = 0X00000100;
            iMaskx = 0X00000800;
            iResult = 0;
            iResultx = 0;
        }

        bool ChkBit9th()
        {
            iResult = iNo & iMask;

            if(iResult == iMask)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        bool ChkBit12th()
        {
            
            iResultx = iNo & iMaskx;

            if(iResultx == iMaskx)
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
    bool bRet1 = false;
    bool bRet2 = false;
    
    cout<<"Enter the Number Here : \n";
    cin>>iValue;

    BitOpration bobj(iValue);

    bRet1 = bobj.ChkBit9th();
    bRet2 = bobj.ChkBit12th();

    if(bRet1 == true)
    {
        cout<<"The 9th Bit is ON..."<<"\n";
    }
    else
    {
        cout<<"The 9th Bit is OFF..."<<"\n";
    }

    if(bRet2 == true)
    {
        cout<<"The 12th Bit is ON..."<<"\n";
    }
    else
    {
        cout<<"The 12th Bit is OFF..."<<"\n";
    }
    
   
    return 0;
}

