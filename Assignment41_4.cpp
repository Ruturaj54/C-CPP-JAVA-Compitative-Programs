// 4. Write application which accept file name from user and display size of file.
// Input : Demo.txt
// Output : File size is 56 bytes


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
    int iRet = 0,iSize = 0;

    cout<<"Enter the Name Of file you want to read...\n";
    cin>>FileName;

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        cout<<"Unable to open the File....\n";
    }
    else
    {
        cout<<"File Opened Successfully... with fd : "<<fd<<"\n";
   
        cout<<"Sucessfully opened the File and Reading activity performed Sucessfully..\n";

        while(iRet = read(fd,Arr,100) != 0)
        {
            iSize = iSize + iRet;
        }
        cout<<"File Contains "<<iSize<<" Bytes in it...";
        close(fd);
    }

   

}