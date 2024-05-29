//Accept two number from user and print first number in second number of time on screen.
//Input : 12 5
//Output : 12 12 12 12 12 
//Input : -2 3
//Output : -2 -2 -2  
//Input : 21 -3
//Output : 21 21 21 

#include<stdio.h>

int Display (int iNo,int iFrequency)
{
	if(iFrequency < 0)
	{
		iFrequency= -iFrequency;
	}
	int iCnt=0;

	for(iCnt=1 ; iCnt <= iFrequency ; iCnt++)
	{
		printf("%d\t",iNo);
	}
}

int main()
{
	int iValue=0;
	int iCount =0;

	printf("Enter the Number :");
	scanf("%d",&iValue);

	printf("Enter the Number :");
	scanf("%d",&iCount);

	Display(iValue,iCount);
	return 0;
}