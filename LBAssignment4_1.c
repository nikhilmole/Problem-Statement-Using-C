#include<stdio.h>
int MultiFact(int iNo)
{
    int iCount = 0;
    int iMulti = 1;
    for(iCount = 1; iCount < iNo; iCount++)
    {
        if(iNo % iCount == 0)
        {
            printf("%d\t\n", iCount);
            iMulti = iMulti * iCount;
        }
    }
    return iMulti;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = MultiFact(iValue);
    printf("Multiplication is : %d" , iRet);
    return 0;
}