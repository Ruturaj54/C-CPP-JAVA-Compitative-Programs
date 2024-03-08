//Problem Statement:4. Write a program which accept string from user and display only 
//digits from that string.
//Input : “marve89llous121”
//Output : 89121
//Input : “Demo”

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
        void DisplayDigits()
        {
            while(*Arrx != '\0')
            {
                if(*Arrx >= '0' && *Arrx <= '9')
                {
                    cout<<*Arrx;
                }
                *Arrx++;
            }
            
           
        }

};

int main()
{
    char arr[20];

    cout<<"Enter the string : \n";
    scanf("%[^'\n']s",arr);

    Alpha cobj(arr);
    
    cobj.DisplayDigits();
    

    return 0;
}