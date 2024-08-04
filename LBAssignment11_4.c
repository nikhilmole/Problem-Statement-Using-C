#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int Ans = 1;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        Ans = Ans * iDigit;
    }
    return Ans;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);
    printf("Multiplication is : %d", iRet);

    return 0;
}