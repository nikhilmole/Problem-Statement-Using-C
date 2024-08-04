#include<stdio.h>
double CircleArea(float fRadius, float fPI1)
{
    double Area = 0.0;
    Area = (fPI1 * fRadius * fRadius);
    return Area;
}
int main()
{
    float PI = 3.14f;
    float fROC = 0.0;
    double dRet = 0.0;

    printf("Enter radius :");
    scanf("%f",&fROC);

    dRet = CircleArea(fROC, PI);
    printf("Area is : %f",dRet);
    return 0;
}