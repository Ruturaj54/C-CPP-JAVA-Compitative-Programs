//Problem Statement:3.Write a program which accept string from user and toggle the case.
//Input : “Marvellous Multi OS”
//Output : mARVELLOUS mULTI os

#include<iostream>
using namespace std;

class Alpha
{  
    private:
        char *Arrx;
        char *Brrx;
        int iCnt;
    public:
        Alpha(char Str[])
        {
            Arrx = Str;
            Brrx = Str;
            iCnt = 0;
        }
        void DisplayUpr()
        {
            while(*Arrx != '\0')
            {
                if(*Arrx >= 'a' && *Arrx <= 'z')
                {
                    *Arrx = *Arrx - 32;
                }
                else
                {
                    *Arrx = *Arrx + 32;
                }
                iCnt++;
               Arrx++;
            }
            
            for(int i = 0;i < iCnt;i++)
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
    
    cobj.DisplayUpr();
    

    return 0;
}