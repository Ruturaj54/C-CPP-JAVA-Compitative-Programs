// 1.Write a program which accept one number and position from user and 
// check whether bit at that position is on or off. If bit is one return TURE 
// otherwise return FALSE.

#include<iostream>
using namespace std;

class BitOpration
{
    public:
        int iNo;
        int iMask;
        int iResult;
        int Pos;

        BitOpration(int A,int B)
        {
            iNo = A;
            Pos = B;
            iMask = 0X00000001;
            iResult = 0;
        }

        bool ChkBit()
        {
            iMask = iMask << (Pos - 1);
            iResult= (iNo & iMask);

            if(iResult == iMask)
            {
                return true; //bit is on
            }
            else
            {
                return false; //bit is off
            }

        }

};

int main()
{
    int iValue = 0;
    int iPos = 0;
    bool bRet = false;
    
    cout<<"Enter the Number Here : \n";
    cin>>iValue;

    cout<<"Enter the position of bit that you want to check : \n";
    cin>>iPos;

    BitOpration bobj(iValue,iPos);
    bRet = bobj.ChkBit();

    if(bRet == true)
    {
        cout<<"The "<<iPos<<" Bit is ON...";
    }
    else
    {
        cout<<"The "<<iPos<<" Bit is OFF...";
    }
    

    return 0;
}

