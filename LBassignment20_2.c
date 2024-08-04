#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int i = 0;
    int SumCount = 0;
    int OddCount = 0;
    int Ans = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            SumCount++;
        }
        else
        {
            OddCount++;
        }
    }
    Ans = SumCount - OddCount;
    return Ans;
}
int main()
{
    int iCnt = 0;
    int iSize = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d elements :\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);
    printf("Difference beetween frequency even number and odd number is :%d",iRet);

    free(p);

    return 0;
}