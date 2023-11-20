/*Problem statement : write a Program which accept a number from user and display its table.
Input : 2
Output : 2 4 6 8 10 12 14 16 18 20  
Input : -5
Output : 5 10 15 20 25 30 35 40 45 50
*/

#include<stdio.h>

void Table(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	int iCnt=0,itable=0;
	for(iCnt=1;iCnt<=10;iCnt++)
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

	Table(iValue);


	return 0;
}