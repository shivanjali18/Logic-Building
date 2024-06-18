//Write a Program which accept number from user and display all its non factors .
//Input : 12
//Output : 5 7 8 9 10 11
//Input : 13
//Output : 2 3 4 5 6 7 8 9 10 11 12
#include<stdio.h>

void FactRev(int iNo)
{
	int iFact=0;

	for(iFact=1;iFact<=iNo;iFact++)
	{
		if((iNo%iFact)!=0)
		{
			printf("%d\t",iFact);
		}
	}
}
int main()
{
	int iValue =0;
	int iRet=0;

	printf("Enter the number :\n");
	scanf("%d",&iValue);

	FactRev(iValue);
	
	return 0;
}