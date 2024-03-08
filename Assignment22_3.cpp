//Problem Statement: 3. Accept number of rows and number of columns from user and display below 
//pattern.
//Input : iRow = 5 iCol = 5
//Output : 
//$ * * * *     11 12 13 14 15
//# $ * * *     21 22 23 24 25
//# # $ * *     31 32 33 34 35
//# # # $ *     41 42 43 44 45
//# # # # $     51 52 53 54 55

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
                    if(i == j)
                    {
                        cout<<"$"<<"\t";
                    }
                    else if(i > j)
                    {
                        cout<<"#"<<"\t";
                    }
                    else 
                    {
                        cout<<"*"<<"\t";
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