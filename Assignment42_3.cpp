// 3. Write a program which accepts file name from user and count number of 
// white spaces from that file.
// Input : Demo.txt
// Output : Number of white spaces are 13

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
            if(Arr[iCnt] == ' ')
            {
                iCount++;
            }
        }
        cout<<"Number of white spaces in the file are : "<<iCount<<"\n";
        close(fd);
    }

   

}