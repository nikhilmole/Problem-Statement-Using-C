#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = iRow; i > 0; i--)
    {
        for(j = iCol; j > 0; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number rows and columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2); 

    return 0;
}