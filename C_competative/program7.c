#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 1;
    while(iNo>=iCnt)
    {
        printf("* ");
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number of elements : \n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}