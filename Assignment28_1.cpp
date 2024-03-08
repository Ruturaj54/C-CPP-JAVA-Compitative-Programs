//Problem Statement:1.Write a program which accept string from user and accept one 
//character. Check whether that character is present in string or not.
//Input : “Marvellous Multi OS”
//e
//Output : TRUE
//Input : “Marvellous Multi OS”
//W
//Output : FALSE

#include<iostream>
using namespace std;

class Alpha
{  
    private:
        char *Arrx;
        char Ch;
    public:
        Alpha(char Str[],char X)
        {
            Arrx = Str;
            Ch = X;
        }
        bool CheckCharacter()
        {
            while(*Arrx != '\0')
            {
                if(*Arrx == Ch)
                {
                    return true;
                }
                *Arrx++;
            }
           
        }

};

int main()
{
    char arr[20];
    bool bRet = false;
    char Cvalue = '\0';

    cout<<"Enter the string : \n";
    scanf("%[^'\n']s",arr);
    
    cout<<"Enter the chracter that you want to search : \n";
    cin>>Cvalue;

    Alpha cobj(arr,Cvalue);
    
    bRet = cobj.CheckCharacter();

    if(bRet == true)
    {
        cout<<"Character: "<<Cvalue<<" is Present in String"<<"\n";
    }
    else
    {
        cout<<"Character: "<<Cvalue<<" is Not Present in String"<<"\n";
    }
    

    return 0;
}