import java.util.*;

class Assignment46_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;//iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        System.out.println("Enter the Number that you want to search for :");
        int num = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol,num);

        mobj.Accept();
        mobj.Display();
        int iRet = mobj.Frequency();
        System.out.println("Frequency of the "+num+" in Matrix is : "+iRet);

        mobj = null;
        System.gc();
        sobj.close();
    }
}

class Matrix
{
    protected int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
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
    public int iCnt;
    public int Numb;
    public MyMatrix(int A, int B,int C)
    {
        super(A,B);
        this.iCnt = 0;
        this.Numb = C;
    }

    public int Frequency()
    {
        for(int i = 0;i < Arr.length;i++)
        {
            for(int j = 0;j < Arr[i].length;j++)
            {
                if(Numb == Arr[i][j])
                {
                    iCnt++;
                }
            }   
        }
        return iCnt;
    }
    


}
