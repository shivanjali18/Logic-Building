//Write a program which accept number from user and print all odd number up to N.
//Input : 18
//Output : 1 3 5 7 9 11 13

#include<stdio.h>
void OddDisplay(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int i=0;

	for(i=1;i<=iNo;i++)
	{
		if(((iNo%i)!=0)||((iNo%2)!=0))
		{
			printf("%d\t",i);
		}
		
	}
}
int main()
{
	int iValue=0;
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	OddDisplay(iValue);
	return 0;
}