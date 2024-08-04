#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo < 50)
    {
        printf("Small number");
    }
    else if((iNo >= 50) && (iNo < 100)) 
    {
        printf("Medium number");
    }
    else
    {
        printf("Large number"); 
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d", &iValue);
    Number(iValue);
    return 0;
}
