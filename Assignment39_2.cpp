// 2. Write a program which accept one number and position from user and off 
// that bit. Return modified number

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

        int OffBit()
        {
            iMask = iMask << (Pos - 1);
            iResult = (iNo & iMask);

            if(iResult == iMask)
            {
                return (iNo ^ iMask); 
            }
            else
            {
                return iNo; 
            }

        }

};

int main()
{
    int iValue = 0;
    int iPos = 0;
    int iRet = 0;
    
    cout<<"Enter the Number Here : \n";
    cin>>iValue;

    cout<<"Enter the position of bit that you want to Off : \n";
    cin>>iPos;

    BitOpration bobj(iValue,iPos);
    iRet = bobj.OffBit();

    if(iRet == iValue)
    {
        cout<<"The "<<iPos<<" Bit was Already off..";
        cout<<"Number is : "<<iRet<<"\n";
    }
    else
    {
        cout<<"The Modified Number is : "<<iRet<<"\n";
    }

    return 0;
}

