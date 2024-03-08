//problem Statement:-Write a program which accept5s total marks and calculate the percentage
#include<stdio.h>

float Percentage(int iValue1,int iTotal)
{
    float Per = 0.0f;

    Per = (((float)iValue1/(float)iTotal)*100);

    return Per;
}
int main()
{
    int iNo = 0;
    int iTot = 0;
    float iAns = 0.0f;

    printf("Enter your marks:");
    scanf("%d",&iNo);

    printf("Enter total marks:");
    scanf("%d",&iTot);

    iAns = Percentage(iNo,iTot);

    printf("Your percentage is:%f",iAns);

    return 0;
}