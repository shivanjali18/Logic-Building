//Accept one number from user and print that number of * on screen.
#include<stdio.h>

void Display (int iNo)
{
	int iCnt=0;

	for(iCnt=0;iCnt<=iNo;iCnt++)
	{
		printf("*\t");
	}
}

int main()
{
	int iValue=0;
	printf("Enter the Number :");
	scanf("%d",&iValue);

	Display(iValue);
	return 0;
}