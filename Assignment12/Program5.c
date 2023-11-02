#include<stdio.h>

int CountDiff(int iNo)
{
int iDigit =0;
int isum=0;
int idiff =0;
while (iNo != 0)
{
    iDigit = iNo % 10;
    if((iNo % 2) == 0)
    {
        isum = isum + iDigit;
    }
    if((iNo % 2) != 0)
    {
        idiff = idiff + iDigit;
    }
    iNo = iNo / 10;
}
return (isum - idiff);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

printf("%d",iRet);
    return 0;
}