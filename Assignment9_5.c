#include<stdio.h>

double SquareMeter(float fSqFeet)
{
    double fRet = 0.0;
    fRet = (double)fSqFeet * (double)0.0929;
    return fRet;
}

int main()
{
    float fValue = 0;
    double dRet = 0.0;
    printf("Enter the area in square feet:");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Square feet to Square meter is:%f",dRet);

    return 0;
}

//Time complexity = O(1);