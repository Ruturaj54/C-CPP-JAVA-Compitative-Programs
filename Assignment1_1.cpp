//Write a program to divide the two numbers

#include<iostream>
using namespace std;

class Division
{
    public:
        int iNo1;
        int iNo2;
        float fAns;

        Division(int A,int B,float C = 0.0f)
        {
            iNo1 = A;
            iNo2 = B;
            fAns = C;
        }

        void DivideTwoNumbers(int iNo1,int iNo2)
        {
            if(iNo2 == 0)
            {
                cout<<"Invalid Input...\n";
            }

            fAns = (float)iNo1/(float)iNo2;
            cout<<"Division of Two Numbers is:"<<fAns<<"\n";
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the First Number:"<<"\n";
    cin>>iValue1;

    cout<<"Enter the Second Number:"<<"\n";
    cin>>iValue2;

    Division dobj1(iValue1,iValue2);

    dobj1.DivideTwoNumbers(iValue1,iValue2);
    
    return 0;
}