// write a program which accept one number from user and print that number of even numbers on screen 

#include<stdio.h>
void Print(int iNo)
{
    int iCount = 0;
    int Even = 0;
    if(iNo <= 0)
    {
        return;
    }
    for(iCount = 1; iCount <= iNo*2; iCount++)
    {
        if((iCount %2) == 0)
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

    Print(iValue);

    return 0;
}