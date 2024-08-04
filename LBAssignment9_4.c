#include<stdio.h>

int RangeSumEven(int iStarting, int iEnd)
{
    int iCnt = 0;
    int Ans = 0;

    if((iStarting >= iEnd) || (iStarting <= 0))
    {
        printf("Invalid input\n");
        return 0;
    }

    for(iCnt = iStarting; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            Ans = Ans + iCnt;
        }
    }
    return Ans;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point :");
    scanf("%d", &iValue1);

    printf("enter end point :");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);
    printf("Addition is : %d", iRet);

    return 0;
}