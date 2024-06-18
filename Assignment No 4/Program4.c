//Write a Program which accept number from user and return summation of all its non factor.
//Input : 12
//Output : 50
//Input : 10
//Output : 37
#include<stdio.h>

int SumNonFact(int iNo)
{
	int iFact=0;
	int iSum=0;

	for(iFact=1;iFact<=iNo;iFact++)
	{
		if((iNo%iFact)!=0)
		{
			iSum=iSum+iFact;
		}
	}
	return iSum;
}
int main()
{
	int iValue =0;
	int iRet=0;

	printf("Enter the number :\n");
	scanf("%d",&iValue);

	iRet=SumNonFact(iValue);
	printf("Summation of non factors are :%d",iRet);
	
	return 0;
}