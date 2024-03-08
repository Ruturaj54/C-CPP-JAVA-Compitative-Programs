// 4. Write a program which accept one number and position from user and 
// toggle that bit. Return modified number.

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

        int TogggleBit()
        {
            iMask = iMask << (Pos - 1);
            iResult = (iNo & iMask);

            if(iResult == iMask)
            {
                return (iNo ^ iMask); 
            }
            else
            {
                return (iNo ^ iMask); 
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

    cout<<"Enter the position of bit that you want to Toggle : \n";
    cin>>iPos;

    BitOpration bobj(iValue,iPos);
    iRet = bobj.TogggleBit();

    cout<<"The Modified Number is : "<<iRet<<"\n";

    return 0;
}

