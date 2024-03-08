// 1.Write a program which accept matrix from user and display transpose of the 
// matrix.
// The transpose of a given matrix is formed by interchanging the rows and 
// columns of a matrix.
// Input :
// Output :
// void Transpose(int Arr[][], int iRow, int iCol)
// {
// //Logic
// }
// 3 2 5 9
// 4 3 2 2
// 8 4 1 5
// 3 9 7 5

// 3 4 8 3
// 2 3 4 9
// 5 2 1 7
// 9 2 5 5

//      3 2 5 9     00,01,02,03     3 4 8 3     00,01,02,03    
//      4 3 2 2     10,11,12,13     2 3 4 9     10,11,12,13
//      8 4 1 9     20,21,22,23     5 2 1 7     20,21,22,23 
//      3 9 7 5     30,31,32,33     9 2 5 5     30,31,32,33

import java.util.*;

class Assignment47_1
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
        mobj.TransposeMatrix();
       

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

    public void TransposeMatrix()
    {
        int i = 0;
        int Brr[][] = new int[Arr.length][Arr[i].length]; 
        for(i = 0;i < Arr.length;i++)
        {
                for(int j = 0;j < Arr[i].length;j++)
                {
                    Brr[i][j] = Arr[j][i];
                }
        }
        System.out.println("Array After the transpose....");
        System.out.println("-------------------------------------");

        for(i = 0; i < Brr.length; i++)
        {
            for(int j = 0; j < Brr[i].length; j++)
            {
                System.out.print(Brr[i][j]+"\t");
            }
            System.out.println();
        }

        
        System.out.println("-------------------------------------");
        
    }
   
    
}

