// 5. Write a program which accept one number from user and toggle contents 
// of first and last nibble of the number. Return modified number. (Nibble is a 
// group of four bits)

#include<iostream>
using namespace std;

class BitOpration
{
    public:
        long long int iNo;
        long long int iMask;
        long long int iResult;

        BitOpration(int A)
        {
            iNo = A;
            iMask = 0Xf000000f;
            iResult = 0;
        }

        int TogggleFirstandLast()
        {
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
    long long int iValue = 0;

    long long int iRet = 0;
    
    cout<<"Enter the Number Here : \n";
    cin>>iValue;

    
    BitOpration bobj(iValue);
    iRet = bobj.TogggleFirstandLast();

    cout<<"The Modified Number is : "<<iRet<<"\n";

    return 0;
}

