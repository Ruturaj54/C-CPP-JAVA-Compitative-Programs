
//Generic program to accept the N numbers from usere and return the smallest number of it;

#include<iostream>
using namespace std;

template<class T>

T AddN(T *arr,int iSize)
{
    T SmallNum = arr[0];
    int i = 0;

    for(i = 0;i < iSize;i++)
    {
        if(SmallNum > arr[i])
        {
            SmallNum = arr[i];
        }
    }
    return SmallNum;
    
}


int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;
    int Size = 0;
    int fSize = 0;
    int arr[Size];
    float brr[fSize];

    cout<<"Enter the No of elements you want to insert : \n";
    cin>>Size;
    
    cout<<"Enter the array Elements : \n";
    for(int iCnt = 0;iCnt < Size;iCnt++)
    {
        cin>>arr[iCnt];
    }

    cout<<"Enter the No of elements you want to insert : \n";
    cin>>fSize;
    
    cout<<"Enter the array Elements : \n";
    for(int iCnt = 0;iCnt < fSize;iCnt++)
    {
        cin>>brr[iCnt];
    }
    
    iRet = AddN(arr,Size);
    cout<<"Smallest Integer Array number is : "<<iRet<<"\n";

    
    fRet = AddN(brr,Size);
    cout<<"Smallest Float array Elements is : "<<fRet<<"\n";

    return 0;
}
