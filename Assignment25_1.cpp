//Problem Statement:1. Write a program which displays ASCII table. Table contains symbol, 
//Decimal, Hexadecimal and Octal representation of every member from 
//0 to 255
#include<iostream>
using namespace std;

class Printer
{
    private:
        int iCnt = 0;
    public:
        void DisplayAsciiTable()
        {
            printf("----------------------------------------\n");
            printf("Decimal HexaDecimal Octal Character \n");
            printf("----------------------------------------\n");

            for(iCnt = 0;iCnt <= 255;iCnt++)
            {
                printf("%d\t  %x\t    %o\t    %c\n",iCnt,iCnt,iCnt,iCnt);
                printf("----------------------------------------\n");
            }
        }
};

int main()
{
    Printer pobj;
    pobj.DisplayAsciiTable();
    return 0;
}