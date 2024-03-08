//Problem Statement:4. Accept Character from user and check whether it is small case or 
//not (a-z).
//Input : g
//Output : TRUE
//Input : D
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

        bool CheckSmall()
        {

            if(cValue1 > 'z' || (cValue1 > 'Z' && cValue1 < 'a') || cValue1 < 'A' )
            {
                cout<<"Please Enter Alphabet Only.....\n"; //Filter
                return false;
            }
            
            if(cValue1 >= 'a' && cValue1 <= 'z')
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

    Alpha dobj(Ch);

    bRet = dobj.CheckSmall();

    if(bRet == true)
    {
        cout<<"It is Small letter\n";
    
    }
    else
    {
        cout<<"It is Not Small letter\n";
    }


    return 0;
}