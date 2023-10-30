#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit=0;
    int icnt=0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 2)
        {
            icnt++;
        }
        iNo = iNo / 10;
    }
    return icnt; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

printf("2 occurs %d times \n",iRet);
    return 0;
}