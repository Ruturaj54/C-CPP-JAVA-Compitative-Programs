// /3. Write a program which display product of all digits of all element from 
// singly linear linked list. (Don’t consider 0) 
// Function Prototype :
// void DisplayProduct( PNODE Head); 
// Input linked list : |11|->|20|->|32|->|41| 
// Output : 1 2 6 4

// ========================================================================
// ********************SINGLY Linear Linked List***************************
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
    private:
        PNODE first;
        int Count;
    public:
        SinglyLL();
        void InsertFirst(int No);
        void InsertLast(int No);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int No,int iPos);
        void DeleteAtPos(int iPos);
        int SearchFirstPos(int No);
        void DisplayRev();
        void PalendromNumbers();
        void DisplayProduct();
};

SinglyLL::SinglyLL()
{
    first = NULL;
    Count = 0;
}
void SinglyLL::InsertFirst(int No)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = No;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    
}

void SinglyLL::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE Temp = first;
    newn = new NODE;
    newn->data = No;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else if(first->next == NULL)
    {
        first->next = newn;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
}

void SinglyLL::Display()
{
    PNODE Temp = first;

    cout<<"Contents of Linked List are : \n";
    while(Temp != NULL)
    {
        cout<<"|"<<Temp->data<<"|-->";
        Temp = Temp->next;
    }cout<<"NULL\n";
}

int SinglyLL::CountNode()
{
    PNODE Temp = first;
    Count = 0;

    while(Temp != NULL)
    {
        Temp = Temp->next;
        Count++;
    }
    return Count;
    
}

void SinglyLL::DeleteFirst()
{
    if(first == NULL)
    {
        cout<<"The Linked List is Empty...\n";
        return;
    }
    else if(first->next == NULL)
    {
        delete(first);
        first = NULL;
    }
    else
    {
        PNODE Temp = first;
        first = first->next;
        delete(Temp);
    }
}
void SinglyLL::DeleteLast()
{
    if(first == NULL)
    {
        cout<<"The Linked List is Empty...\n";
        return;
    }
    else if(first->next == NULL)
    {
        delete(first);
        first = NULL;
    }
    else
    {
        PNODE Temp = first;

        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        delete(Temp->next);
        Temp->next = NULL;
    }
}

void SinglyLL::InsertAtPos(int No,int iPos)
{
    int Size = 0;
    Size = CountNode();
    if(iPos < 1 || iPos > Size + 1)
    {
        cout<<"Invalid Position...\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == Size)
    {
        InsertLast(No);
    }
    else
    {
        PNODE newn = NULL;
        PNODE Tempx = NULL;
        newn = new NODE;
        newn->data = No;
        newn->next = NULL;
        PNODE Temp = first;

        for(int i = 1;i < iPos - 1;i++)
        {
            Temp = Temp->next;
        }
        Tempx = Temp->next;
        Temp->next = newn;
        newn->next = Tempx;

    }
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    int Size = 0;
    Size = CountNode();
    PNODE Temp = first;
    PNODE Tempx = NULL;

    if(iPos < 1 || iPos > Size)
    {
        cout<<"Invalid Position ...\n";
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == Size)
    {
        DeleteLast();
    }
    else
    {
        for(int i = 1;i < iPos-1;i++)
        {
            Temp = Temp->next;
        }
        Tempx = Temp->next->next;
        delete(Temp->next);
        Temp->next = Tempx;
    }
}

int SinglyLL::SearchFirstPos(int No)
{
    PNODE Temp = first;
    int Size = CountNode();

    for(int i = 1;i < Size;i++)
    {
        if(Temp->data == No)
        {
            return i;
        }
        Temp = Temp->next;
    }
}
void SinglyLL::DisplayRev()
{
    PNODE Temp = first;
    int Size = CountNode();
    int Sum = 0;
    int iDigit = 0;
    int Num = 0;
    int Numx = 0;

    for(int i = 1;i <= Size;i++)
    {
        Num = Temp->data;
        while(Num != 0)
        {
            iDigit = Num % 10;
            Numx = Numx * 10 + iDigit;
            Num = Num/10;
        }
        cout<<"| "<<Numx<<" |"<<"-->";
        Temp = Temp->next;
        Sum = 0;
        Numx = 0;
    }
    cout<<"\n";
}

void SinglyLL::PalendromNumbers()
{
    PNODE Temp = first;
    int Size = CountNode();
    int Sum = 0;
    int iDigit = 0;
    int Num = 0;
    int Numx = 0;

    for(int i = 1;i <= Size;i++)
    {
        Num = Temp->data;
        while(Num != 0)
        {
            iDigit = Num % 10;
            Numx = Numx * 10 + iDigit;
            Num = Num/10;
        }
        if(Numx == Temp->data)
        {
            cout<<"\t"<<Numx<<"\t";
        }
        Temp = Temp->next;
        Sum = 0;
        Numx = 0;
    }
    cout<<"\n";
}

void SinglyLL::DisplayProduct()
{
    PNODE Temp = first;
    int Size = CountNode();
    int Sum = 0;
    int iDigit = 0;
    int Num = 0;
    int Numx = 1;

    for(int i = 1;i <= Size;i++)
    {
        Num = Temp->data;
        while(Num != 0)
        {
            iDigit = Num % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            Numx = Numx * iDigit;
            Num = Num/10;
        }
        cout<<"\t"<<Numx<<"\t";
        Temp = Temp->next;
        Sum = 0;
        Numx = 1;
    }
    cout<<"\n";
}



int main()
{
    SinglyLL obj;
    int iRet = 0;
    int num = 0;
    int Number = 0;
    int Position = 0;
    int FirstOccur = 0;

   while(1)
   {
        cout<<"---------------------------------------------------------------------------\n";
        cout<<"Enter the Operation You want to perform...\n";
        cout<<"1.InsertFirst\n";
        cout<<"2.InsertLast\n";
        cout<<"3.InsertAtPosition\n";
        cout<<"4.DeleteFirst\n";
        cout<<"5.DeleteLast\n";
        cout<<"6.DeleteAtPosition\n";
        cout<<"7.SearchFirstOccurance\n";
        cout<<"8.Display the whole Linked List\n";
        cout<<"9.Count Nodes in Linked List\n";
        cout<<"10.Display Reverse Numbers of linked list\n";
        cout<<"11.Find Palindrome Numbers from Linked List\n";
        cout<<"12.Display the Product of Each Digit of the Number from Linked List\n";
        cout<<"13.Exit\n";
        cin>>num;

        switch(num)
        {
            case 1:
                cout<<"InsertFirst function called\n";
                cout<<"Usage : Enter the Number here to that you want to insert first :";
                cin>>Number;
                obj.InsertFirst(Number);
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 2:
                cout<<"InsertLast function called\n";
                cout<<"Usage : Enter the Number here to that you want to insert at Last :";
                cin>>Number;
                obj.InsertLast(Number);
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 3:
                cout<<"InsertAtPos function called\n";
                cout<<"Usage : Enter the Number here to that you want to insert at Last :";
                cin>>Number;
                cout<<"Also Give the Position where to insert Number : \n";
                cin>>Position;
                obj.InsertAtPos(Number,Position);
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 4:
                cout<<"DeleteFirst function called\n";
                obj.DeleteFirst();
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 5:
                cout<<"DeleteLast function called\n";
                obj.DeleteLast();
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 6:
                cout<<"DeleteAtPosition function called\n";
                cout<<"Enter the Position that node you want to delete\n";
                obj.DeleteLast();
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 7:
                cout<<"Search First Ocuurence of Number function called\n";
                cout<<"Enter the Number that you want to search in Linked List : \n";
                cin>>Number;
                FirstOccur = obj.SearchFirstPos(Number);
                cout<<"First Occurance of the "<<Number<<" In LL is : "<<FirstOccur<<"\n";
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 8:
                cout<<"Display function called\n";
                obj.Display();
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 9:
                cout<<"CountNode function called\n";
                iRet = obj.CountNode();
                cout<<"Number of Nodes in Linked List are : "<<iRet<<"\n";
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 10:
                cout<<"Display Reverse function called\n";
                obj.DisplayRev();
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 11:
                cout<<"Displaying The Palindrom Numbers from the Linked List\n";
                obj.PalendromNumbers();
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 12:
                cout<<"Display Product of Number of Linked List called\n";
                obj.DisplayProduct();
                cout<<"-----------------------------------------------------------------------------\n";
                break;
            case 13:
                cout<<"Application Exited Sucessfully\n";
                cout<<"!!!!!Thanks For Using My Project!!!!!!!\n";
                cout<<"-----------------------------------------------------------------------------\n";
                return -1;
                break;
            default:
                cout<<"Please Enter Valid Input...\n";
                cout<<"-----------------------------------------------------------------------------\n";
                return -1;
                break;
        }

   }
    
    return 0;
}