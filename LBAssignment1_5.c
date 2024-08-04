// Print 5 time * on screen
#include<stdio.h>
void Accept(int iNo)
{
    int iCount = 0;
    for(iCount = 1; iCount <= iNo; iCount++)
    printf("*");
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    Accept(iValue);
    return 0;
}