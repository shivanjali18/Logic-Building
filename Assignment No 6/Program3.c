//Write a program which accept number from user and print its number line.
//Input : 4
//Output : -4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>
void Display(int iNo)
{
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	int i=0;

	for(i=-iNo;i<=iNo;i++)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int iValue=0;
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}