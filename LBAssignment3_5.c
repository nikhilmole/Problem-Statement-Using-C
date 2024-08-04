// chect the charecter are vowel or not
#include<stdio.h>

#define True 1
#define False 0

typedef int bool; 

bool CheckVowel(char Clet)
{
    if (Clet == 'a' || Clet == 'A' || Clet == 'e' || Clet == 'E' || Clet == 'i' || Clet == 'I' || Clet == 'o' || Clet == 'O' || Clet == 'u' || Clet == 'U') 
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    char Cvalue;
    bool bRet;

    printf("Enter Character\n");
    scanf(" %c", &Cvalue); // Corrected the format specifier, added & to address

    bRet = CheckVowel(Cvalue);
    if(bRet == True)
    {
        printf("It is a vowel\n");
    }
    else
    {
        printf("It is not a vowel\n");
    }
    return 0;
}
