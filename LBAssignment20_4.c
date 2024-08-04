#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int i = 0;
    int iFreq = 0;

    for(i = 0; i < iLength; i ++)
    {
        if(Arr[i] == 11)
        {
            iFreq++;
        }
    }
    return iFreq;
}
int main()
{
    int iCnt = 0;
    int *p = NULL;
    int iRet = 0;
    int iSize = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *) malloc (iSize * sizeof(int));

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
    printf("Frequency of 11 is : %d",iRet);

    free(p);

    return 0;
}