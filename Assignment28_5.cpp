//Problem Statement:5. Write a program which accept string from user reverse that string 
//in place.
//Input : “abcd”
//Output : “dcba”
//Input : “abba”
//Output : “abba”

#include<iostream>
using namespace std;

class Alpha
{  
    private:
        char *Arrx;
        char *Brrx;
        int iCnt;
        int i;
    public:
        Alpha(char Str[])
        {
            Arrx = Str;
            Brrx = Str;
            iCnt = 0;
        }
        void DisplayRev()
        {
            while(*Arrx != '\0')
            {
                iCnt++;
                *Arrx++;
            }
            iCnt--;
            for(i = iCnt;i >= 0;i--)
            {
                cout<<Brrx[i];
            }
        }

};

int main()
{
    char arr[20];

    cout<<"Enter the string : \n";
    scanf("%[^'\n']s",arr);

    Alpha cobj(arr);
    
    cobj.DisplayRev();

    return 0;
}