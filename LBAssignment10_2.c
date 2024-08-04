#include<stdio.h>
#include<stdbool.h>

#define True 1
#define False 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo % 10;
    
        if(iDigit == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = False;
    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == True)
    {
        printf("It contain zero.\n");
    }
    else
    {
        printf("There is no zero.\n");
    }

    return 0;
}