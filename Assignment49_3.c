// 3. Write a recursive program which accept string from user and count number 
// of characters.
// Input : Hello
// Output : 5

#include<stdio.h>

int StrlenXI(char *Arr)
{
    int iCnt = 0;
    int i = 0;
    while(Arr[i] != '\0')
    {
        iCnt++;
        i++;
    }
    return iCnt;
}

int StrlenXR(char *Arr)
{
    static int iCnt = 0;
    static int i = 0;
    
    if(Arr[i] != '\0')
    {
        iCnt++;
        i++;
        StrlenXR(Arr);
    }
    return iCnt;
}

int main()
{
    char Str[20];
    int iRet = 0;

    printf("Enter the String here : \n");
    scanf("%[^'\n']s",Str);

    iRet = StrlenXR(Str);
    printf("The length of Enterd string is : %d\n",iRet);

    return 0;
}