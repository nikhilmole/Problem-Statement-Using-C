#include<stdio.h>
int SumNonFact(int iNo)
{
    int iSum = 0;
    int iCnt =0;
    for(iCnt = 1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of non factor : %d",iRet);


    return 0;
}