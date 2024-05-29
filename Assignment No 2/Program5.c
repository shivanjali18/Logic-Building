//Accept number from user and check whether that number is even or odd.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

int ChkEven (int iNo)
{
	if(iNo % 2 == 0)
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
	int iValue=0;
	bool bRet = FALSE;

	printf("Enter the Number :");
	scanf("%d",&iValue);

	bRet=ChkEven(iValue);

	if(bRet==TRUE)
	{
		printf("Number is Even\n");
	}
	else
	{
		printf("Number is Odd\n");
	}

	return 0;
}