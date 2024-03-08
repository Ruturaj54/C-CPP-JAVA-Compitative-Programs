
//Generic program to find largest number from three numbers;

#include<iostream>
using namespace std;

template<class T>

T Max(T No1,T No2,T No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else if((No3 > No1) && (No3 > No2))
    {
        return No3;
    }
    else
    {
        cout<<"All numbers are equal\n";
    }
    
}


int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;
    
    iRet = Max(10,30,20);
    cout<<"Max Integer number is : "<<iRet<<"\n";

    fRet = Max(10.01,30.30,20.25);
    cout<<"Max Float number is : "<<fRet<<"\n";

    dRet = Max(10.11001,30.30202,20.3937);
    cout<<"Max double number is : "<<dRet<<"\n";

    return 0;
}
