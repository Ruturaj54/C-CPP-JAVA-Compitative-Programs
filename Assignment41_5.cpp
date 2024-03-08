// 5. Write application which accept file name from user and one string from user. Write 
// that string at the end of file.
// Input : Demo.txt
// Hello World
// Output : Write Hello World at the end of Demo.txt file


#include<iostream>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
using namespace std;

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[100] = {'\0'};
    char FileName[30] = {'\0'};
    int i = 0;

    cout<<"Enter the file Name Here : \n";
    cin>>FileName;

    cout<<"Enter the string here : \n";
    cin>>Arr;
    

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        cout<<"Unable to open the file...\n";
    }
    else
    {
        iRet = write(fd,Arr,100);
        cout<<"Data Written Successfully...\n";

    }

   

}