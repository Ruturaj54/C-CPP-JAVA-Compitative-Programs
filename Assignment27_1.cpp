//Problem Statement:1.Write a program which accept string from user and convert it into 
//lower case.
//Input : “Marvellous Multi OS”
//Output : marvellous multi os

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
        void DisplayLwr()
        {
            while(*Arrx != '\0')
            {
                if(*Arrx >= 'A' && *Arrx <= 'Z')
                {
                    *Arrx = *Arrx + 32;
                }
                else
                {
                    *Arrx = *Arrx;
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
    
    cobj.DisplayLwr();
    

    return 0;
}