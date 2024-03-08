
//4. Write generic program to accept N values and search last occurrence of any 
// specific value.
// Input : 10 20 30 10 30 40 10 40 10
// Value to search : 40


#include<iostream>
using namespace std;

template<class T>

T SearchLast(T *arr,int iSize,T No)
{
   int iCnt = 0;
   int Occur = -1;

   for(int i = 0;i < iSize;i++)
   {
        if(arr[i] == No)
        {
            Occur = i;
        }
   }
   return Occur + 1;
    
}


int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;
    int Size = 0;
    int fSize = 0;
    int iSearch = 0;
    float fSearch = 0.0f;
    int arr[Size];
    float brr[fSize];

    cout<<"Enter the No of elements you want to insert : \n";
    cin>>Size;
    
    cout<<"Enter the array Elements : \n";
    for(int iCnt = 0;iCnt < Size;iCnt++)
    {
        cin>>arr[iCnt];
    }

    cout<<"Enter the No that you want to search its last occurance : \n";
    cin>>iSearch;

    cout<<"Enter the No of elements you want to insert : \n";
    cin>>fSize;
    
    cout<<"Enter the array Elements : \n";
    for(int iCnt = 0;iCnt < fSize;iCnt++)
    {
        cin>>brr[iCnt];
    }

    cout<<"Enter the No that you want to search its last occurance : \n";
    cin>>fSearch;

    
    iRet = SearchLast(arr,Size,iSearch);
    cout<<"last Occurance of : "<<iSearch<<" in array Elements is : "<<iRet<<"\n";

    
    fRet = SearchLast(brr,Size,fSearch);
    cout<<"last Occurance of : "<<fSearch<<" in array Elements is : "<<fRet<<"\n";

    return 0;
}
