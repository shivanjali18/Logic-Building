//Write a Program which accept number from user and display its factors in descending order.
//Input : 12
//Output : 144 (1*2*3*4*6)
#include<stdio.h>

int MultFact(int iNo)
{
	int iFact=0;
	int iMult=1;
	for(iFact=1;iFact<=iNo/2;iFact++)
	{
		if(iNo%iFact==0)
		{
			iMult=iMult*iFact;
		}
	}
	return iMult;
}
int main()
{
	int iValue =0;
	int iRet=0;

	printf("Enter the number :\n");
	scanf("%d",&iValue);

	iRet=MultFact(iValue);
	printf("Multiplication of factors are : %d",iRet);
	
	return 0;
}