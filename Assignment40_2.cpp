// 2. Write a program which accept two numbers from user and display position 
// of common ON bits from that two numbers.

#include<iostream>
using namespace std;

class BitOpration
{
    public:
        int iNo1;
        int iNo2;
        int iAns1;
        int iAns2;
        int iResult1;
        int iResult2;
        int iCount;
        int Arr1[8] = {0,0,0,0,0,0,0,0};
        int Arr2[8] = {0,0,0,0,0,0,0,0};

        BitOpration(int A,int B)
        {
            iNo1 = A;
            iNo2 = B;
            iResult1 = 0;
            iResult2 = 0;
            iCount = 0;
            iAns1 = 0;
            iAns2 = 0;
        }

        void CountOne()
        {   
            int i = 0;
            while(iNo1 != 0)
            {
                iResult1 = iNo1 & 1;
                iNo1 = iNo1 >> 1;
                Arr1[i] = iResult1;
                i++;
            }

            i = 0;
            while(iNo2 != 0)
            {
                iResult2 = iNo2 & 1;
                iNo2 = iNo2 >> 1;
                Arr2[i] = iResult2;
                i++;
            }

            for(int iCnt = 0;iCnt < 8;iCnt++)
            {
                if((Arr1[iCnt] == Arr2[iCnt]) && Arr1[iCnt] > 0 && Arr2[iCnt] > 0 )
                {
                    cout<<"Common ON Bits are : "<<"\n";
                    cout<<iCnt+1<<"\n";
                }
            }

        }

};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    
    cout<<"Enter the 1st Number Here less than 256 : \n";
    cin>>iValue1;

    cout<<"Enter the 2nd Number Here less than 256 : \n";
    cin>>iValue2;

    BitOpration bobj(iValue1,iValue2);

    bobj.CountOne();

    //cout<<"Number of Bits are ON are : "<<iRet;
   
    return 0;
}

