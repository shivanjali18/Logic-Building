/*Problem statement : write a Program to find factorial of given number .
Input : 5
Output : 120  (5*4*3*2*1)
Input : -5
Output : 120
Input : 4
Output : 24
*/

#include<stdio.h>

int Factorial(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	int iCnt=0,iFact=1;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact = iFact * iCnt;
	}
	return iFact;
}

int main()
{
	int iValue=0,iRet=0;

	printf("Enter the Number :\n");
	scanf("%d",&iValue);

	iRet=Factorial(iValue);

	printf("Factorial of Number is :%d",iRet);

	return 0;
}