#include<stdio.h>

int DifDigitSum(int iNo)
{
    int iDigit = 0;
    int SumEven = 0;
    int SumOdd = 0;
    int Ans = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit % 2 == 0)
        {
            SumEven = SumEven + iDigit;
        }
        else
        {
            SumOdd = SumOdd + iDigit;
        }
    }
    return Ans = SumEven - SumOdd;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = DifDigitSum(iValue);
    printf("%d", iRet);

    return 0;
}