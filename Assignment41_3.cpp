// 3. Write application which accept file name from user and read all data from that file 
// and display contents on screen.
// Input : Demo.txt
// Output : Display all data of file

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
    int iRet = 0;

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
        iRet = read(fd,Arr,1024);
   
        cout<<"Sucessfully opened the File and Reading activity performed Sucessfully..\n";

        for(int iCnt = 0;iCnt < 1024;iCnt++)
        {
            cout<<Arr[iCnt];
        }

        close(fd);
    }

   

}