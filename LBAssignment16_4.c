#include<stdio.h>

int Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (j == 1) || (i == iRow) || (j == iCol))
            {
                printf("@\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{   
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter rows and columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}