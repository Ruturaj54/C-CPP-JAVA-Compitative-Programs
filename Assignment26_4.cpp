//Problem Statement:4. Write a program which accept string from user and check whether 
//it contains vowels in it or not.
//Input : “marvellous”
//Output : TRUE
//Input : “Demo”
//Output : TRUE
//Input : “xyz”
//Output : FALSE

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
        bool CheckVowel()
        {

            while(*Arrx != '\0')
            {
                if((*Arrx == 'a') || (*Arrx == 'A') || (*Arrx == 'e') || (*Arrx == 'E') || (*Arrx == 'I') || (*Arrx == 'i') || (*Arrx == 'o') || (*Arrx == 'O') || (*Arrx == 'u') || (*Arrx == 'U'))
                {
                    return true;
                }
                
                Arrx++;
            }
    
        }

};

int main()
{
    char arr[20];
    bool bRet = false;

    cout<<"Enter the string : \n";
    scanf("%[^'\n']s",arr);

    Count cobj(arr);
    
    bRet = cobj.CheckVowel();

    if(bRet == true)
    {
        cout<<"String contains Vowels\n";
    }
    else
    {
        cout<<"String not contains Vowels\n";
    }

    return 0;
}