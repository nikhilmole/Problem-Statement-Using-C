#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Ans = 0;

    Ans = (1000 * iNo);
    return Ans;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Kilometer to Meter distance is : %d", iRet);
    return 0;
}