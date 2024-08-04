//Accept one character from user and convert into upper or lower case
#include<stdio.h>
void DisplayConvert(char Clet)
{
    if((Clet >= 'a') && (Clet <= 'z'))
    {
        Clet = Clet - 32;
        printf("%c", Clet);
    }
    else if((Clet >= 'A') && (Clet <= 'Z'))
    {
        Clet = Clet + 32;
        printf("%c", Clet);
    }

}
int main()
{
    char CValue = '\0';

    printf("Enter Character\n");
    scanf("%c", &CValue);

    DisplayConvert(CValue);

    return 0;
}