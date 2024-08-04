#include<stdio.h>
double FHtoCS(float iNo)
{
    double Ans = 0.0f;

    Ans = (iNo - 32) * (5.0 / 9.0);

    return Ans;
}

int main()
{
    float iValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter temprature in fahrenheit : ");
    scanf("%f", &iValue);

    dRet = FHtoCS(iValue);
    printf("Temprature in Celcius is : %f", dRet);

    return 0;
}