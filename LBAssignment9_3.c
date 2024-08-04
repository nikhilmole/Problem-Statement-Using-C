#include <stdio.h>

int RangeSum(int iStarting, int iEnd) 
{
    int iCnt = 0;
    int Ans = 0;

    for (iCnt = iStarting; iCnt <= iEnd; iCnt++)
    {
        Ans = Ans + iCnt;
    }

    return Ans;
}

int main() {
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point: ");
    scanf("%d", &iValue1);

    printf("Enter End point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    printf("Addition is: %d", iRet);

    return 0;
}
