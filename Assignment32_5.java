
//5. Write a java program which accept string from user and display 
//it in reverse order.
//Input : “MarvellouS”
//Output : “SuollevraM

import java.util.*;

class Assignment32_1
{
    public static void Display(String Str)
    {
        Str.toCharArray(); 
        int Size = Str.length();

        System.out.println("Reverse String is : ");
        for(int i = Size-1;i >= 0 ;i--)
        {
           System.out.print(Str.charAt(i)); 
        }
      
    }
    public static void main(String Args[])
    {
        Scanner Sobj = new Scanner(System.in);

        System.out.println("Enter the String here : ");
        String Value = Sobj.nextLine();
        Display(Value);
        Sobj.close();
    }
}
