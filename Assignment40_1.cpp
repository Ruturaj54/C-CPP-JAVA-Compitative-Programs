// //1.Write a program which accept one number from user and count number of 
// ON (1) bits in it without using % and / operator.

#include<iostream>
using namespace std;

class BitOpration
{
    public:
        int iNo;
        int iMask;
        int iResult;
        int iCount;

        BitOpration(int A)
        {
            iNo = A;
            iMask = 0X00000000;
            iResult = 0;
            iCount = 0;
        }

        int CountOne()
        {
            iMask = iNo | iMask; 
            
            while(iNo != 0)
            {
                iResult = iNo & 1;
                //cout<<iResult;
                iNo = iNo >> 1;
                if(iResult > 0)
                {
                    iCount++;
                }
            }
            return iCount;
        }

};

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout<<"Enter the Number Here : \n";
    cin>>iValue;

    BitOpration bobj(iValue);

    iRet = bobj.CountOne();

    cout<<"Number of Bits are ON are : "<<iRet;
   
    return 0;
}

