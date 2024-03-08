//Write a program which accept temperature in Fahrenheit and convert it into 
//celsius. (1 celsius = (Fahrenheit -32) * (5/9))

#include<stdio.h>

double FhtoCs(float Faren)
{
    double fRet = 0.0f;

    fRet = (Faren - 32)*((double)5/9);

    return fRet;
}

int main()
{
    float fValue = 0.0f;
    double dAns = 0.0;

    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dAns = FhtoCs(fValue);

    printf("The Temperature in Celcius is:%lf\n",dAns);

    return 0;
}

//Time complexity = O(1);