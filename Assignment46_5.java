// 5. Write a program which accept matrix and swap the contents of consecutive rows.
// Input :
// Output :
// void SwapRows(int Arr[][], int iRow, int iCol)
// {
// //Logic
// }
// 3 2 5 9
// 4 3 2 2
// 8 4 1 9
// 3 9 7 5

// 4 3 2 2
// 3 2 5 9
// 3 9 7 5
// 8 4 1 9

//      3 2 5 9     00,01,02,03     4 3 2 2     10,11,12,13    
//      4 3 2 2     10,11,12,13     3 2 5 9     00,01,02,03
//      8 4 1 9     20,21,22,23     3 9 7 5     30,31,32,33
//      3 9 7 5     30,31,32,33     8 4 1 9     20,21,22,23

import java.util.*;

class Assignment46_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;//iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        mobj.SwapedMatrix();

        mobj = null;
        System.gc();
        sobj.close();
    }
}

class Matrix
{
    protected int Arr[][];
    protected int Col;
    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
        this.Col = A;
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the elements : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Entered elements are : ");
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}

class MyMatrix extends Matrix
{
    public int iLarg;
    
    public MyMatrix(int A, int B)
    {
        super(A,B);
        this.iLarg = 0;
    }

    public void SwapedMatrix()
    {
        int i = 0;
        int rows = (Arr.length - 1);

        for(i = 0;i < Arr.length;i++) //2nd with 1st
        {
            int temp = Arr[0][i];
            Arr[0][i] = Arr[rows - 2][i];
            Arr[rows - 2][i] = temp;
        }

        for(i = 0;i < Arr.length;i++) //4th with 3rd
        {
            int temp = Arr[rows - 1][i];
            Arr[rows - 1][i] = Arr[rows][i];
            Arr[rows][i] = temp;
        }

        Display();
    }
    


}
