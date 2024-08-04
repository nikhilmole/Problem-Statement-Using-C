// Accept one number from user and check whether is divisible or not
#include<stdio.h>
#include<stdbool.h>

#define True 1
#define False 0

bool Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return True ;
    }
    else
    {
        return False ;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = False;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    bRet = Check(iValue);
    if(bRet == True)
    {
        printf("%d Number is divisible by 5\n", iValue);
    }
    else
    {
        printf("%d Number is not divisible by 5\n", iValue);
    }
    return 0;
}