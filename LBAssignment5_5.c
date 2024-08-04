#include<stdio.h>
void MultiDisplay(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    MultiDisplay(iValue);

    return 0;
}