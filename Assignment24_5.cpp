//Problem statement: -5. Accept division of student from user and depends on the division 
//display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
//of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
//(Application should be case insensitive)
//Input : C
//Output : Your exam at 9.20 AM
//Input : d
//Output : Your exam at 10.30 AM

#include<iostream>
using namespace std;

class Exam
{
    private:
        char Ch;
    public:
        Exam(char X)
        {
            Ch = X;
        }

        void DisplayExamTime()
        {
            if(Ch != 'A' || Ch != 'a' || Ch != 'B'|| Ch != 'b' || Ch != 'D' || Ch != 'd' || Ch != 'C' || Ch != 'c' )
            {
                cout<<"Please Enter Valid Division...\n";
            }
            if(Ch == 'A' || Ch == 'a')
            {
                cout<<"Your Exam is at 7 Am"<<"\n";
            }
            else if(Ch == 'B' || Ch == 'b')
            {
                cout<<"Your exam is at 8.30 Am"<<"\n";
            }
            else if(Ch == 'C' || Ch == 'c' )
            {
                cout<<"Your exam is at 9.20 Am"<<"\n";
            }
            else if(Ch == 'D' || Ch == 'd')
            {
                cout<<"Your exam is at 10.30 Am"<<"\n";
            }
        }
};

int main()
{
    char cValue = '\0';
    

    cout<<"Enter Your Division : "<<"\n";
    cin>>cValue;

    Exam eobj(cValue);

    eobj.DisplayExamTime();

    return 0;
}