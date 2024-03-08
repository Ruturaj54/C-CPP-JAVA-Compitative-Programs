
// 5. Write generic program to accept N values and reverse the contents.
// Input : 10 20 30 10 30 40 10 40 10
// Output : 10 40 10 40 30 10 30 20 10

#include<iostream>
using namespace std;

template<class T>

T Rev(T *arr,int iSize)
{
   T xrr[iSize];
   int X = iSize - 1;

   for(int i = 0;i < iSize;i++)
   {
        xrr[i] = arr[X];
        X--;
   }

   cout<<"Displaying the Reverse contents : \n";
   for(int i = 0;i < iSize;i++)
   {
     cout<<xrr[i]<<"\t";
   }
   cout<<"\n";
    
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
    
    Rev(arr,Size);
    Rev(brr,Size);
    return 0;
}
