N//Write a program which accept number from user and print even factor of that number on screen.
//Input : 36
//Output :  2  6  12  18
#include<stdio.h>

void DisplayFactor(int iNo)
{
	if(iNo <= 0)
	{
		iNo=-iNo;
	}
	int i=0;

	for(i=1;i<=iNo;i++)
	{
		if(((iNo%i)==0)&&((i%2)==0))
		{
			printf("%d\t",i);
		}
		
	}
}
int main()
{
	int iValue=0;
	printf("Enter number\n");

	scanf("%d",&iValue);
	DisplayFactor(iValue);
	return 0;
}