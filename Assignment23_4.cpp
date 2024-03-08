//Problem Statement:4. Accept number of rows and number of columns from user and display below 
//pattern.
//Input : iRow = 6 iCol = 6
//Output : 

//* * * * * *
//* # # # * *
//* # # * $ *
//* # * $ $ *
//* * $ $ $ *
//* * * * * *

#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;

    public:
        Pattern(int X,int Y)
        {
            iRow = X;
            iCol = Y;
        }

        void Display()
        {
            int i = 0;
            int j = 0;

            if(iRow < 0)
            {
                iRow = -iRow;
            }
            if(iCol < 0)
            {
                iCol = -iCol;
            }

            for(i = iRow;i >= 1; i--)
            {
                for(j = 1;j <= iCol;j++)
                {
                    
                    if((i == j) || (i == iRow) || (j == 1) || (i == 1) || (j == iCol))
                    {
                        cout<<"*"<<"\t";
                    }
                    else if((i > j))
                    {
                        cout<<"#"<<"\t";
                    }
                    else if((i < j))
                    {
                        cout<<"$"<<"\t";
                    }
                
                }
                cout<<"\n";
            }
        }
   

};
int main()
{
    int iRows = 0,iCols = 0;

    cout<<"Enter the Number of Rows:\n";
    cin>>iRows;

    cout<<"Enter the Number of Columns:\n";
    cin>>iCols;

    Pattern pobj(iRows,iCols);
    pobj.Display();

    return 0;
}