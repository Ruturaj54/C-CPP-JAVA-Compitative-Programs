//Problem Statement:2.Write a program which accept string from user and accept one 
//character. Return frequency of that character.
//Input : “Marvellous Multi OS”
//M
//Output : 2
//Input : “Marvellous Multi OS”
//W
//Output : 0

#include<iostream>
using namespace std;

class Alpha
{  
    private:
        char *Arrx;
        char Ch;
    public:
        int iCnt;
        Alpha(char Str[],char X)
        {
            Arrx = Str;
            Ch = X;
            iCnt = 0;

        }
        int CountCharFreq()
        {
            while(*Arrx != '\0')
            {
                if(*Arrx == Ch)
                {
                    iCnt++;
                }
                *Arrx++;
            }
            return iCnt;
           
        }

};

int main()
{
    char arr[20];
    int iRet = 0;;
    char Cvalue = '\0';

    cout<<"Enter the string : \n";
    scanf("%[^'\n']s",arr);
    
    cout<<"Enter the chracter that you want to search : \n";
    cin>>Cvalue;

    Alpha cobj(arr,Cvalue);
    
    iRet = cobj.CountCharFreq();

    cout<<"The Frequency of Character : "<<Cvalue<<" is : "<<iRet<<"\n";

    return 0;
}