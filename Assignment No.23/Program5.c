/*
Problem Statement : Accept Number of roes and number of columns from user and display below pattern.
Input : rows - 5         column - 5
Output : 1    2    3    4     5
         1    2               5
         1	   3          5  
         1              4     5  
         1    2    3    4     5
                 
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i==j)
			{
				printf("%d\t",j);
			}
			else if(i==1||i==iRow||j==1||j==iCol)
			{
				printf("%d\t",j);
			}
			else if(i>j)
			{
				printf(" \t");
			}
			else if(j>i)
			{
				printf(" \t");
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