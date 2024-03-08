//Program to print 5 to 1 on screen

class Assignment1_3
{
    public static void main(String Ags[])
    {
        Printer pobj = new Printer();
        pobj.Display();
    }
}

class Printer
{
    public int iCnt;

    Printer()
    {
        iCnt = 0;
    }

    void Display()
    {
        for(iCnt = 5;iCnt > 0;iCnt--)
        {
            System.out.println(iCnt);
        }
    }
}