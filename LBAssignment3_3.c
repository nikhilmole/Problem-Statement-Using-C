// write a program which accept number from user and print even factors of that number
#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCount = 2; iCount < iNo; iCount++)
    {
        if((iNo % iCount == 0) && (iCount % 2 == 0))
        {
            printf("%d\n", iCount);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);
    return 0;

}