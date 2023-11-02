#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
  
  int iDigit=0;
  BOOL bret = FALSE;
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

}
int main()
{
    int iValue = 0;

BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
    bRet = ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is no zero\n");

    }
    return 0;
}