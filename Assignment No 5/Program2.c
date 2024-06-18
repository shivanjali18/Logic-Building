//Write a Program which accept name from user which accept one nummber from user and check whether that numberis greater that100 or not..
//Input : 101
//Output : Greater
//Input : 39
//Output : smaller

#include<stdio.h>
#include<stdbool.h>

typedef int bool

#define TRUE 1
#define FALSE 0
bool ChkGreater(int iNo)
{
	if(iNo>100)
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
	bool bRet=FALSE;

	printf("Please enter number :\n");
	scanf("%d",&iValue);
	bRet=ChkGreater(iValue);
	if(bRet==true)
	{
		printf("Greater");
	}
	else
	{
		printf("smaller");
	}
	return 0;
}