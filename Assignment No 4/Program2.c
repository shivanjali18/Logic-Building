//Write a Program which accept number from user and display its factors in descending order.
//Input : 12
//Output : 6 4 3 2 1 
#include<stdio.h>

void FactRev(int iNo)
{
	int iFact=0;

	for(iFact=iNo/2;iFact<=iNo/2;iFact--)
	{
		if(iNo%iFact==0)
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