//Problem Statement:4.Write a program which accept string from user and accept one 
//character. Return index of last occurrence of that character.
//Input : “Marvellous Multi OS”
//M
//Output : 11
//Input : “Marvellous Multi OS”
//W
//Output : -1
//Input : “Marvellous Multi OS”
//e
//Output : 4

#include<iostream>
using namespace std;

class Alpha
{  
    private:
        char *Arrx;
        char *Brrx;
        char Ch;
    public:
        int iCnt;
        Alpha(char Str[],char X)
        {
            Arrx = Str;
            Brrx = Str;
            Ch = X;
            iCnt = 0;

        }
        int Index()
        {
            int i = 0;
            int j = 0;
            while(*Arrx != '\0')
            {
                iCnt++;
                Arrx++;
            }
            for( i = 0;i < iCnt;i++)
            {
                if(Brrx[i] == Ch)
                {
                    j = i;
                }
                else
                {
                    j = -1;
                }
                
            }
            return j; 
           
           
        }

};

int main()
{
    char arr[20];
    int iRet = 0;
    char Cvalue = '\0';

    cout<<"Enter the string : \n";
    scanf("%[^'\n']s",arr);
    
    cout<<"Enter the chracter that you want to search : \n";
    cin>>Cvalue;

    Alpha cobj(arr,Cvalue);
    
    iRet = cobj.Index();

    cout<<"The index of Character : "<<Cvalue<<" is : "<<iRet<<"\n";

    return 0;
}