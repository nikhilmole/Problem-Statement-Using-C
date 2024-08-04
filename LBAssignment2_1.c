// accept one number from user and print that number of * on screen
#include<stdio.h>
void Display(int iNo)
{
    int iCount = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while(iCount < iNo)
    {
        printf("*");
        iCount++;
    } 
}
int main()
{   
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}