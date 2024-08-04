#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iLength)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 5) == 0)
        {
            printf("Divisible by 5 number is :%d\n",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d Elements :\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}