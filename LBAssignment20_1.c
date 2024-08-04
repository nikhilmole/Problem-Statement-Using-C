#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iFreq = 0;
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iFreq++;
        }
    }
    return iFreq;
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
        printf("Unable top allocate memory\n");
        return -1;
    } 

    printf("Enter %d elements :\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p,iSize);
    printf("Frequency of even numbers is :%d",iRet);
    free(p);

    return 0;
}