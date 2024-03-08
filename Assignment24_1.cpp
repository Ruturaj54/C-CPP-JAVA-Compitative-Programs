//Problem Statement:1. Accept Character from user and check whether it is alphabet or not 
//(A-Z a-z).
//Input : F
//Output : TRUE
//Input : &
//Output : FALSE

#include<iostream>
using namespace std;

class Alpha
{   
    private:
        char cValue1;

    public:
        Alpha(char X)
        {
            cValue1 = X;
        }

        bool CheckAlpha()
        {
            if(cValue1 >= 'a' && cValue1 <= 'z' || cValue1 >= 'A' && cValue1 <= 'Z')
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

    Alpha aobj(Ch);

    bRet = aobj.CheckAlpha();

    if(bRet == true)
    {
        cout<<"It is an Alphabet\n";
    
    }
    else
    {
        cout<<"It is Not an Alphabet\n";
    }

    

    return 0;
}