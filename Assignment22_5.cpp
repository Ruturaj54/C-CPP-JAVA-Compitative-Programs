//Problem Statement: Accept number of rows and number of columns from user and display below 
//pattern.
//Input : iRow = 4 iCol = 4
//Output : 
//1 2 3 4   11 12 13 14 
//  2 3 4   21 22 23 24
//    3 4   31 32 33 34
//      4   41 42 43 44
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
                    if((i == 1) || (i < j))
                    {
                        cout<<j<<"\t";
                    }
                    else if(i == j)
                    {
                        cout<<i<<"\t";
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