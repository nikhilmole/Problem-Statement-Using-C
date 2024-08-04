#include<stdio.h>

void RangeDisplayRev(int iStarting, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStarting; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    if(iStarting >= iEnd)
    {
        printf("Invalid input");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter Starting point :");
    scanf("%d",&iValue1);

    printf("Enter end point :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}