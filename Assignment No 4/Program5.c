//Write a Program which accept number from user and return difference between summation of all its factors and non factor.
//Input : 12
//Output : -34 (16-50)
//Input : 10
//Output : -29 (8-37)

#include<stdio.h>

int FactDiff(int iNo)
{
	int iFact=0;
	int iSum2=0;
	int iSum1=0;

	for(iFact=1;iFact<=iNo/2;iFact++)
	{
		if((iNo%iFact)==0)
		{
			iSum1=iSum1+iFact;
		}
	}
	for(iFact=1;iFact<=iNo;iFact++)
	{
		if((iNo%iFact)!=0)
		{
			iSum2=iSum2+iFact;
		}
	}
		
	return iSum1-iSum2;
}
int main()
{
	int iValue =0;
	int iRet=0;

	printf("Enter the number :\n");
	scanf("%d",&iValue);

	iRet=FactDiff(iValue);
	printf("Difference of factors and non factors are :%d",iRet);
	
	return 0;
}