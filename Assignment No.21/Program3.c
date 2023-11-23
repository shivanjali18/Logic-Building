//Problem Statement : Accept number of rows and number of columns from user and display below pattern.
//Input : irow : 5              icol : 5
//output : $   *   *   *   *
//         *   $   *   *   *
//         *   *   $   *   *
//         *   *   *   $   * 
//         *   *   *   *   $
#include<stdio.h>
void Pattern (int iRow ,int iCol)
{
	int i,j=0;
	for(i=0;i< iRow;i++)
	{
		for(j=0;j <iCol;j++)
		{
			if(i==j)
			{
				printf("$\t");
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

	printf("Enter the number of rows and columns :");
	scanf("%d%d",&iValue1,&iValue2);

	Pattern(iValue1,iValue2);
	return 0;
}