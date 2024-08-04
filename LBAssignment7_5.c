#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int SumEvenFacto = 1;
    int SumOddFacto = 1;
    int SubFacto = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        SumEvenFacto = SumEvenFacto * iCnt;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) != 0)
        SumOddFacto = SumOddFacto * iCnt;
    }
    SubFacto = SumOddFacto - SumEvenFacto;
    return SubFacto;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial Difference is : %d", iRet);
    return 0;
}