//Problem Statement:5. Write a program which accept string from user and count number of 
//white spaces
//Input : “MarvellouS”
//Output : 0
//Input : “MarvellouS Infosystems”
//Output : 1
//Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
//Output : 5

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
        int CountWhiteSpaces()
        {
            while(*Arrx != '\0')
            {
                if(*Arrx == ' ')
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
    int iRet = 0;

    cout<<"Enter the string : \n";
    scanf("%[^'\n']s",arr);

    Alpha cobj(arr);
    
    iRet = cobj.CountWhiteSpaces();

    cout<<"Number of White spaces are : "<<iRet<<"\n";
    

    return 0;
}