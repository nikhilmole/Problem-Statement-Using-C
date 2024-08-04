#include<stdio.h>
double SqFeettoSqMeter(float iValue)
{
    double Ans = 0.0f;

    Ans = iValue * 0.0929;

    return Ans;
}
int main()
{
    float iValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter Area in square feet :");
    scanf("%f", &iValue);

    dRet = SqFeettoSqMeter(iValue);
    printf("Square meter is : %f",dRet);

    return 0;
}