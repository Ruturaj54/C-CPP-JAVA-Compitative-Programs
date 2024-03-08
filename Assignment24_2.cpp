//Problem Statement:2. Accept Character from user and check whether it is capital or not 
//(A-Z).
//Input : F
//Output : TRUE
//Input : d
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

        bool CheckCapital()
        {
            if(cValue1 > 'z' || (cValue1 > 'Z' && cValue1 < 'a') || cValue1 < 'A' )
            {
                cout<<"Please Enter Alphabet Only.....\n"; //Filter
                return false;
            }

            if(cValue1 >= 'A' && cValue1 <= 'Z')
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

    bRet = aobj.CheckCapital();

    if(bRet == true)
    {
        cout<<"It is Capital Letter\n";
    
    }
    else
    {
        cout<<"It is Not Capital Letter\n";
    }

    

    return 0;
}