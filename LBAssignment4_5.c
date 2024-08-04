#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iDiff = 0;
    int iNf = 0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
        else
        {
           iNf = iNf + iCnt; 
        }
    }
    iDiff = iSum - iNf;
    return iDiff; 
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("Dif of all its factors and non factors are : %d",iRet);

    return 0;
}