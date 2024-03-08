// 2. Write application which accept file name from user and create that file.
// Input : Demo.txt
// Output : File created successfully.


#include<iostream>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

int main()
{
    int fd = 0;
    char FileName[30];

    cout<<"Enter the Name Of file you want to Create...\n";
    cin>>FileName;

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        cout<<"Unable to Create the File....\n";
    }
    else
    {
        cout<<"File Created Successfully... with fd : "<<fd<<"\n";
    }


}