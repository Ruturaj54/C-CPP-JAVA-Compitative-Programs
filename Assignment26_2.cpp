//Problem Statement:2. Write a program which accept string from user and count number of 
//small characters.
//Input : “Marvellous”
//Output : 9

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

        int CountSmall()
        {

            while(*Arrx != '\0')
            {
                if((*Arrx >= 'a') && (*Arrx <= 'z'))
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
    iRet = cobj.CountSmall();

    cout<<"Small Letters are : "<<iRet<<"\n";

    return 0;
}