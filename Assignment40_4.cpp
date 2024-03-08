// //4. Write a program which accept one number , two positions from user and 
// check whether bit at first or bit at second position is ON or OFF.

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
        int iPos;
        int iPosx;

        BitOpration(int A,int B,int C)
        {
            iNo = A;
            iMask = 0X00000001;
            iMaskx = 0X00000001;
            iResult = 0;
            iResultx = 0;
            iPos = B;
            iPosx = C;
        }

        bool ChkBitNth()
        {
            iMask = iMask << (iPos - 1);
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
        bool ChkBitNxth()
        {
            iMaskx = iMaskx << (iPosx - 1);
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
    int iPos1 = 0;
    int iPos2 = 0;
    
    cout<<"Enter the Number Here : \n";
    cin>>iValue;

    cout<<"Enter the First Position Here : \n";
    cin>>iPos1;
    cout<<"Enter the Second Position Here : \n";
    cin>>iPos2;

    BitOpration bobj(iValue,iPos1,iPos2);

    bRet1 = bobj.ChkBitNth();
    bRet2 = bobj.ChkBitNxth();

    if(bRet1 == true)
    {
        cout<<"The "<<iPos1<<" Bit is ON..."<<"\n";
    }
    else
    {
        cout<<"The "<<iPos1<<" Bit is OFF..."<<"\n";
    }

    if(bRet2 == true)
    {
        cout<<"The "<<iPos2<<" Bit is ON..."<<"\n";
    }
    else
    {
        cout<<"The "<<iPos2<<" Bit is OFF..."<<"\n";
    }
   
    return 0;
}

