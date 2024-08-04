#include<stdio.h>
int DollarToINR(int iNo)
{
    int Ans = 0;

    Ans = iNo * 70;
    return Ans;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number of USD :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Indian Currency is : %d", iRet);
    return 0;
}