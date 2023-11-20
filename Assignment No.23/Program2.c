/*
Problem Statement : Accept Number of roes and number of columns from user and display below pattern.
Input : rows - 4         column - 4
Output : *    *    *    #
         *    *    #	@
         *    #	   @    @
         #    @    @    @
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;

	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			if(i==j)
			{
				printf("#\t");
			}
			else if(i>j)
			{
				printf("@\t");
			}
			else
			{
				printf("*\t");
			}
			
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter the Number of Rows and Columns :");
	scanf("%d\t%d",&iValue1,&iValue2);

	Pattern(iValue1,iValue2);

	return 0;
}