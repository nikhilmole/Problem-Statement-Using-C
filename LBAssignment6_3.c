#include<stdio.h>
int Factorial(int iNo)
{
    int iCnt = 0;
    int MultiFacto = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        MultiFacto = (MultiFacto * iCnt);
    }
    return MultiFacto;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("%d",iRet);
    return 0;
}