// 5. /Write a program which accept matrix and check whether the matrix is 
// Sparse matrix or not.
// Sparse matrix is a matrix with the majority of its elements equal to zero.
// Input :

// 1 0 3 0
// 0 6 0 0
// 0 0 1 0
// 9 0 0 9


// Output : True




import java.util.*;

class Assignment47_5
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
        boolean bRet = mobj.ChkSparse();
        if(bRet == true)
        {
            System.out.println("The give matrix is SPARSE matrix....");
        }
        else
        {
            System.out.println("The give matrix is NOT an SPARSE matrix....");
        }
       

        mobj = null;
        System.gc();
        sobj.close();
    }
}

class Matrix
{
    protected int Arr[][];
    protected int Col;
    protected int iCntZero;
    protected int iCntNum;
    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
        this.Col = A;
        iCntNum = 0;
        iCntZero = 0;
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
                if(Arr[i][j] == 0)
                {
                    iCntZero++;
                }
                else if(Arr[i][j] > 0)
                {
                    iCntNum++;
                }
            }
            System.out.println();
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
    public int Zero;
    public int NonZero;
    
    public MyMatrix(int A, int B)
    {
        super(A,B);
        this.iLarg = 0;
        this.Zero = iCntZero;
        this.NonZero = iCntNum;
    }

    public boolean ChkSparse()
    {
        if(iCntZero > iCntNum)
        {
            return true;
        }
        else
        {
           return false;
        }
    }
}

