#include<stdio.h>
void RevTable(int iNo)
{
    int iCnt = 0;
    for(iCnt = 10;iCnt >= 1;iCnt--)
    {
        printf("%d * %d = %d\n",iNo,iCnt,iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    RevTable(iValue);
    return 0;
}