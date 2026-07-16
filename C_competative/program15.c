//Accept one charachter from user and check whether that character is vowel(a,e,i,o,u) or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if(CValue=='a' || CValue=='e' || CValue=='i' || CValue=='o' || CValue=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);
    if(bRet==TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is not vowel\n");
    }
    return 0;
}