//1.Write a program which accept radius of circle from user and calculate its area. 
//Consider value of PI as 3.14. (Area = PI * Radius * Radius)

#include<stdio.h>

double AreaOfCircle(float fRadius)
{
    double PI = 3.14;
    double iRet = 0.0;
    iRet = ((double)fRadius * (double)fRadius)*PI;
    return iRet;
}
int main()
{
    float fValue = 0.0;
    double dArea = 0.0;

    printf("Enter the radius of circle:\n");
    scanf("%f",&fValue);

    dArea = AreaOfCircle(fValue);

    printf("Area of circle is:%f\n",dArea);


    return 0;
}

//Time Complexity:- O(1)