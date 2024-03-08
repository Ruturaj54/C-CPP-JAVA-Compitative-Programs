//Problem Statement:3. Accept Character from user and check whether it is digit or not 
//(0-9).
//Input : 7
//Output : TRUE
//Input : d
//Output : FALSE

#include<iostream>
using namespace std;

class Digit
{   
    private:
        char cValue1;

    public:
        Digit(char X)
        {
            cValue1 = X;
        }

        bool CheckDigit()
        {

            if(cValue1 >= '0' && cValue1 <= '9')
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
    char Ch = '\0';
    bool bRet = false;

    cout<<"Enter the character:"<<"\n";
    cin>>Ch;

    Digit dobj(Ch);

    bRet = dobj.CheckDigit();

    if(bRet == true)
    {
        cout<<"It is Digit\n";
    
    }
    else
    {
        cout<<"It is Not Digit\n";
    }


    return 0;
}