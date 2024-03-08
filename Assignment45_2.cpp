
// Write generic program to accept N values and count frequency of any specific 
// value.
// Input : 10 20 30 10 30 40 10 40 10
// Value to check frequency : 10
// Output : 4


#include<iostream>
using namespace std;

template<class T>

T Frequency(T *arr,int iSize,T No)
{
   int iCnt = 0;

   for(int i = 0;i < iSize;i++)
   {
        if(arr[i] == No)
        {
            iCnt++;
        }
   }
   return iCnt;
    
}


int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;
    int Size = 0;
    int fSize = 0;
    int iFreq = 0;
    float fFreq = 0.0f;
    int arr[Size];
    float brr[fSize];

    cout<<"Enter the No of elements you want to insert : \n";
    cin>>Size;
    
    cout<<"Enter the array Elements : \n";
    for(int iCnt = 0;iCnt < Size;iCnt++)
    {
        cin>>arr[iCnt];
    }

    cout<<"Enter the No that you want to calculate frequency : \n";
    cin>>iFreq;

    cout<<"Enter the No of elements you want to insert : \n";
    cin>>fSize;
    
    cout<<"Enter the array Elements : \n";
    for(int iCnt = 0;iCnt < fSize;iCnt++)
    {
        cin>>brr[iCnt];
    }

    cout<<"Enter the No that you want to calculate frequency : \n";
    cin>>fFreq;

    
    iRet = Frequency(arr,Size,iFreq);
    cout<<"Frequency of : "<<iFreq<<" in array Elements is : "<<iRet<<"\n";

    
    fRet = Frequency(brr,Size,fFreq);
    cout<<"Frequency of : "<<fFreq<<" in array Elements is : "<<fRet<<"\n";

    return 0;
}
