#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit =0;
    int icnt =0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

printf("%d",iRet);
    return 0;
}