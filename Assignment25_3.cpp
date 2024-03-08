//Problem Statement:3. Accept character from user. If it is capital then display all the 
//characters from the input characters till Z. If input character is small 
//then print all the characters in reverse order till a. In other cases 
//return directly.
//Input : Q
//Output : Q R S T U V W X Y Z
//Input : m
//Output : m l k j i h g f e d c b a
//Input : 8
//Output 

#include<iostream>
using namespace std;

class Printer
{
    private:
        char Ch;
    public:
        Printer(char X)
        {
            Ch = X;
        }
        void Display()
        {
            if(Ch >= 'a' && Ch <='z')
            {
                 while(Ch >= 'a')
                {
                    cout<<Ch<<"\t";
                    Ch--;
                }
                
            }
            else if(Ch >= 'A' && Ch <= 'Z')
            {
                while(Ch <= 'Z')
                {
                    cout<<Ch<<"\t";
                    Ch++;
                }
            }
            else if(Ch > 'z' || (Ch > 'Z' && Ch < 'a') || Ch < 'A' )
            {
                cout<<"Please enter Alphabet only....\n";
              
            }
        }
    
};

int main()
{
    char CValue = '\0';

    cout<<"Enter the charcter : ";
    cin>>CValue;

    Printer pobj(CValue);
    pobj.Display();

    return 0;
}