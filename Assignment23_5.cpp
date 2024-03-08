//Problem Statement:5. Accept number of rows and number of columns from user and display below 
//pattern.
//Input : iRow = 4 iCol = 4
//Output : 
//1 2 3 4   11 12 13 14 
//1 2   4   21 22 23 24 
//1   3 4   31 32 33 34 
//1     4   41 42 43 44 
//1 2 3 4   51 52 53 54 

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

            for(i = 1;i <= iRow; i++)
            {
                for(j = 1;j <= iCol;j++)
                {
                  if((i == j) || (i == 1) || (i == iRow))
                  {
                    cout<<j<<"\t";

                  }
                  else if(j == iCol)
                  {
                    cout<<iCol<<"\t";
                  }
                  else if(j == 1)
                  {
                    cout<<"1"<<"\t";
                  }
                  else
                  {
                    cout<<" "<<"\t";
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