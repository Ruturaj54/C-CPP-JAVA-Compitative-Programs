//Problem Statement:4. Accept Character from user and check whether it is special symbol 
//or not (!, @, #, $, %, ^, &, *).
//Input : %
//Output : TRUE
//Input : d
//Output : FALSE

#include<iostream>
using namespace std;

class Checker
{
    private:
        char Ch;
    public:
        Checker(char X)
        {
            Ch = X;
        }
        bool CheckSymbol()
        {
           if(Ch == '!' || Ch == '@' || Ch == '#' || Ch == '$' || Ch == '%' || Ch == '^' || Ch == '&' || Ch == '*')
           {
            return true;
           }
           else
           {
            return false;
           }
        }
    
};

int main()
{
    char CValue = '\0';
    bool bRet = false;

    cout<<"Enter the charcter : ";
    cin>>CValue;

    Checker cobj(CValue);
    bRet = cobj.CheckSymbol();

    if(bRet == true)
    {
        cout<<"It is a Symbol...\n";
    }
    else
    {
        cout<<"It is not a Sysmbol...\n";
    }

    return 0;
}