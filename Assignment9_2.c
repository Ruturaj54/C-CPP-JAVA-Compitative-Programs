//2. Write a program which accept width & height of rectangle from user and calculate 
//its area. (Area = Width * Height)

#include<stdio.h>

double AreaOfRectangle(float flength,float fbreadth)
{
    double iRet = 0.0;
    iRet = (double)flength * (double)fbreadth;
    return iRet;
}
int main()
{
    float fValue1 = 0.0,fValue2 = 0.0;
    double dArea = 0.0;

    printf("Enter the Length of Rectangle:\n");
    scanf("%f",&fValue1);

    printf("Enter the Breadth of Rectangle:\n");
    scanf("%f",&fValue2);


    dArea = AreaOfRectangle(fValue1,fValue2);

    printf("Area of Rectangle is:%f\n",dArea);


    return 0;
}

//Time Complexity:- O(1)