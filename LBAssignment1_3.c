// Program to print 5 to 1 numbers on screen
#include<stdio.h>
void Display()
{
    int i = 0;
    int iCount = 5;
    int iNum = 0;
    while(i < iCount)
    {   
        iNum = iCount - i;
        printf("%d\n",iNum);
        i++;
    }
}
int main()
{  
    Display();

    return 0;
}