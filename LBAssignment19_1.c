#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int Ans = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[i];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[i];
        }
    }
    Ans = iSumEven - iSumOdd;
    return Ans;
}
int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    int *p = NULL;
    

    printf("Enter Number of elements :\n");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    
    printf("Enter %d elements :\n" ,iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    printf("Result is %d\n",iRet);

    free(p);
    return 0;
}