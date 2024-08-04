#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i = 0;
    int iCount = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iCnt = 0;
    int iSize = 0;
    int iValue = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of element :\n");
    scanf("%d",&iSize);

    printf("Enter The number :\n");
    scanf("%d",&iValue);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d numbers :\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize,iValue);
    printf("Frequency of %d is: %d\n",iValue,iRet);

    free(p);

    return 0;
}