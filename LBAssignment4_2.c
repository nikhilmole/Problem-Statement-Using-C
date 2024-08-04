#include<stdio.h>
void FactRev(int iNo)
{
    int iCount = 0;
    for(iCount = iNo; 0 < iCount ; iCount--)
    {
        if((iNo % iCount) == 0)
        {
            printf("%d\t", iCount);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}