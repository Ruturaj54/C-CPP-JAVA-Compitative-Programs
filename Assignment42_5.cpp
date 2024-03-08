// 5. Write a program which accepts file name and one count from user and read 
// that number of characters from starting position.
// Input : Demo.txt 12
// Output : Display first 12 characters from Demo.txt

#include<iostream>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

int main()
{
    int fd = 0;
    char FileName[30];
    char Arr[1024] = {"\0"};
    int iRet = 0,iCount = 0;
   

    cout<<"Enter the Name Of file you want to read...\n";
    cin>>FileName;

    cout<<"Enter the Number character that you want to read ....\n";
    cin>>iCount;

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        cout<<"Unable to open the File....\n";
    }
    else
    {
        cout<<"File Opened Successfully... with fd : "<<fd<<"\n";
        iRet = read(fd,Arr,iCount);
   
        cout<<"Sucessfully opened the File and Reading activity performed Sucessfully..\n";

        for(int iCnt = 0;iCnt < iCount;iCnt++)
        {
           cout<<Arr[iCnt];
        }
        
        close(fd);
    }

   

}