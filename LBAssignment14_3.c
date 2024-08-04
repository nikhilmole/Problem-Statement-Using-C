#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(i = 1,ch1 = 'A'; i <= iRow; i++,ch1++)
    {
        for(j = 1,ch2 = 'A'; j <= iCol; j++,ch2++)
        {
            printf("%c\t",ch1);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Rows and Column : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}