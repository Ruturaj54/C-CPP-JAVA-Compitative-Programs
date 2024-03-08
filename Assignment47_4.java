// 4. Write a program which accept matrix and check whether the matrix is 
// identity matrix or not.
// Identity matrix is a square matrix with 1’s along the diagonal from upper left to 
// lower right and 0’s in all other positions. 
// If it satisfies the structure as explained before then the matrix is called as 
// identity matrix.
// Input :
// 1 0 0 0
// 0 1 0 0
// 0 0 1 0
// 0 0 0 1
// Output : True



import java.util.*;

class Assignment47_4
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
        boolean bRet = mobj.ChkIdentityMatrix();
        if(bRet == true)
        {
            System.out.println("The give matrix is identity matrix....");
        }
        else
        {
            System.out.println("The give matrix is NOT an identity matrix....");
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
    
    public MyMatrix(int A, int B)
    {
        super(A,B);
        this.iLarg = 0;
    }

    public boolean ChkIdentityMatrix()
    {
        int i = 0;
        int iCnt = 0;

        for(i = 0;i < Arr.length;i++)
        {
            for(int j = 0;j < Arr[i].length;j++)
            {
                if(i == j)
                {
                    if(Arr[i][j] == 1)
                    {
                        iCnt++;
                    }
                }
            }
        }
        if(iCnt == Arr.length)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
   
    
}

