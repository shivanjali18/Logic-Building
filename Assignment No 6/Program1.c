//Write a program which accept number from user and print that number of $ and * on screen.
//Input : 5
//Output :$ * $ * $ * $ * $ *
//Input : -3
//Output :$ * $ * $ *

#include<stdio.h>
void Pattern(int iNo)
{
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		printf("$\t*\t");
	}
}
int main()
{
	int iValue=0;
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}