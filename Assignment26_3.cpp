//Problem Statement:3. Write a program which accept string from user and return 
//difference between frequency of small characters and frequency of 
//capital characters.
//Input : “MarvellouS”
//Output : 6 (8-2

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

        int iCntSmall = 0;
        int iCntCapital = 0;

        int CountSmall()
        {

            while(*Arrx != '\0')
            {
                if((*Arrx >= 'a') && (*Arrx <= 'z'))
                {
                    iCntSmall++;
                }
                else
                {
                    iCntCapital++;
                }
                Arrx++;
            }
            return iCntSmall-iCntCapital;
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

    cout<<"Frequency between Small and Capital Letters are : "<<iRet<<"\n";

    return 0;
}