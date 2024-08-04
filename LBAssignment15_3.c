#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';
    int iCnt = 1;

    for(i = 1, ch = 'a'; i <= iRow; i++,ch++)
    {
        for(j = 1, ch = 'a'; j <= iCol; j++,ch++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t", ch);
            }
            else
            {
                printf("%d\t", iCnt);
                iCnt++;
            }
        }
        printf("\n"); 
        iCnt = 1; 
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter rows and columns : ");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
