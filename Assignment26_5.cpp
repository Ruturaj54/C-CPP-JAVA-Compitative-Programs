//Problem Statement:3. Write a program which accept string from user and display it inn 
//reverse order.
//Input : “MarvellouS”
//Output : “SuollevraM”

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