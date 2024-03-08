// 3. Write a program which accept matrix and return largest number from both the 
// diagonals
// Input :
// Output : 9

//      3 2 5 9     00,01,02,03
//      4 3 2 2     10,11,12,13
//      8 4 1 5     20,21,22,23
//      3 9 7 5     30,31,32,33

import java.util.*;

class Assignment46_3
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
        int iRet = mobj.LargestDiaNumb();
        System.out.println("Largest Number from both the Diagonal of Matrix is : "+iRet);

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

    public int LargestDiaNumb()
    {
        int i = 0,j = 0;
        int Bigy = Arr[0][0];

        for(i = 0;i < Arr.length;i++)
        {
            for(j = 0;j < Arr[i].length;j++)
            {
                if(i == j)
                {
                    if(Bigy < Arr[i][j])
                    {
                        Bigy = Arr[i][j];
                    }

                }
            }   
        }

        int Bigx = Arr[0][Col - 1];

        for(i = 0;i < Arr.length;i++)
        {
            for(j = 0;j < Arr[i].length;j++)
            {
                if(i + j == 3)
                {
                    if(Bigx < Arr[i][j])
                    {
                        Bigx = Arr[i][j];
                    }
                }
            }   
        }
        
        if(Bigx > Bigy)
        {
            iLarg = Bigx;
        }
        else
        {
            iLarg = Bigy;
        }
        return iLarg;
    }
    


}
