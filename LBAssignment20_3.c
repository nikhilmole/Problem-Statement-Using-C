#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
            return 1;
        }

    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    BOOL bRet = False;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements :\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);
    if(bRet == True)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);
    
    return 0;
}
