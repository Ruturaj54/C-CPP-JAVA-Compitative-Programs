// 5. Write a program which accept one number from user and range of 
// positions from user. Toggle all bits from that range.

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
            iMask = 0X0000000f;
            iMaskx = 0X00000001;
            iResult = 0;
            iResultx = 0;
            iPos = B;
            iPosx = C;
        }

        int TogggleBit()
        {
            iMask = iMask << (iPosx - iPos);
            iResult = iNo ^ iMask;
            return iResult;
        }

};

int main()
{
    int iValue = 0;
    bool bRet1 = false;
    bool bRet2 = false;
    int iStart = 0;
    int iEnd = 0;
    int iRet = 0;
    
    cout<<"Enter the Number Here : \n";
    cin>>iValue;

    cout<<"Enter the First Position Here : \n";
    cin>>iStart;
    cout<<"Enter the Second Position Here : \n";
    cin>>iEnd;

    BitOpration bobj(iValue,iStart,iEnd);

    iRet = bobj.TogggleBit();

    cout<<"The Modified Number is : "<<iRet<<"\n";

   
    return 0;
}

