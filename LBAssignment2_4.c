// Accept two numbers from user and display first number in second number of times
#include<stdio.h>
void Display(int iNo1, int iFreq)
{
    int i = 0;
    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }
    for(i = 0; i < iFreq; i++)
    {
        printf(" %d  ",iNo1);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);
    Display(iValue, iCount);

    return 0;
}