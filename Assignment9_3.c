//3. Write a program which accept distance in kilometre and convert it into meter. (1 
//kilometre = 1000 Meter

#include<stdio.h>

float KMtoMeters(float fKm)
{
    float fMeters = 0.0;

    fMeters = fKm * 1000;
    return fMeters;
}
int main()
{
    float fValue1 = 0.0;
    float fAns = 0.0;

    printf("Enter the Number of kilometers:");
    scanf("%f",&fValue1);

    fAns = KMtoMeters(fValue1);

    printf("Km to Meters is:%f\n",fAns);


    return 0;
}

//Time Complexity:- O(1)