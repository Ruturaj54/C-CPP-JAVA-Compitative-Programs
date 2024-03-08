// 1. Write application which accept file name from user and open that file in read mode.
// Input : Demo.txt
// Output : File opened successfully.

#include<iostream>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

int main()
{
    int fd = 0;
    char FileName[30];

    cout<<"Enter the Name Of file you want to Open...\n";
    cin>>FileName;

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        cout<<"Unable to Open the File....\n";
    }
    else
    {
        cout<<"File Opened Successfully... with fd : "<<fd<<"\n";
    }


}