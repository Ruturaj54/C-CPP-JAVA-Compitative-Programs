//3. Write a program which accept matrix and reverse the contents of each 
// column.

// 3 2 5 9
// 4 3 2 2
// 8 4 1 9
// 3 9 7 5

// 3 9 7 5
// 8 4 1 9
// 4 3 2 2
// 3 2 5 9

import java.util.*;

class Assignment47_3
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
        mobj.ReverseCol();
       

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

    public void ReverseCol()
    {
        int i = 0;
        int Brr[][] = new int[Arr.length][Arr[i].length]; 

        for(i = 0;i < Arr.length;i++)
        {
                for(int rows = Arr.length-1,j = 0;j < Arr[i].length;j++,rows--)
                {
                    Brr[j][i] = Arr[rows][i];
                }
        }
        System.out.println("Array After the ReverseCol....");
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

