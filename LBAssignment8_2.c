#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double Area = 0.0f;

    Area = (fWidth * fHeight);

    return Area;
}
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0f;

    printf("Enter Width :");
    scanf("%f",&fValue1);

    printf("Enter Height :");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1 ,fValue2);
    printf("Area of Reactangle is : %f",dRet);

    return 0;
}