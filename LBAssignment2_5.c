// Accept one number from user and check whether number is even or odd. 
#include<stdio.h>
#include<stdbool.h>

#define True 1
#define False 0

bool CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return True;
    }
    else
    {
        return False;
    }
    
}
int main()
{
    int iValue = 0;
    bool bRet = False;
    printf("Enter Number\n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    if(bRet == True)
    {
        printf("%d number is even\n", iValue);
    }
    else
    {
        printf("%d number is odd\n",iValue);
    }

    return 0;
}