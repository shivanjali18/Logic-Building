/*Problem statement : write a Program which accept a number from user and display its table in reverse order.
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2  
Input : -5
Output : 50 45 40 35 30 25 20 15 10 5
*/

#include<stdio.h>

void TableRev(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	int iCnt=0,itable=0;
	for(iCnt=10;iCnt>=1;iCnt--)
	{
		itable = iCnt * iNo;
		printf("%d\t",itable);
	}
	
}

int main()
{
	int iValue=0,iRet=0;

	printf("Enter the Number :\n");
	scanf("%d",&iValue);

	TableRev(iValue);


	return 0;
}