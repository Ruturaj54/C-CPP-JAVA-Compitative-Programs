//Problem Statement:1.Write a program which accept string from user and count number of 
//capital characters.
//Input : “Marvellous Multi OS”
//Output : 4

#include<iostream>
using namespace std;

class Count
{  
    private:
        char *Arrx;
    public:
        Count(char Str[])
        {
            Arrx = Str;
        }

        int iCnt = 0;

        int CountCapital()
        {

            while(*Arrx != '\0')
            {
                if((*Arrx >= 'A') && (*Arrx <= 'Z'))
                {
                    iCnt++;
                }
                Arrx++;
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

    Count cobj(arr);
    iRet = cobj.CountCapital();

    cout<<"Capital Letters are : "<<iRet<<"\n";

    return 0;
}