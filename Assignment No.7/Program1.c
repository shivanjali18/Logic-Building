/*Problem statement : Write a Program which accept number from user and if number is less than 50 then print small if it is greater than 50 and less than 
100 then print medium , if it is greater than 100 then print large .
Input : 75
Output : Medium
*/

#include<stdio.h>

void Number(int iNo)
{
	if(iNo < 50)
	{
		printf("Small");
	}
	else if((iNo > 50) && (iNo < 100))
	{
		printf("Medium");
	}
	else
	{
		printf("Large");
	}
}

int main()
{
	int iValue=0;

	printf("Enter the Number :\n");
	scanf("%d",&iValue);

	Number(iValue);

	return 0;
}