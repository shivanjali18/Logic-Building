/* Problem Statement : Accept Number of rows and column from user and display below Pattern.
Input : iRow - 5            iCol - 5
Output :
			$  *  *  *  *
			#  $  *  *  *
			#  #  $  *  *
			#  #  #  $  *
			#  #  #  #  $
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else if(i>j)
			{
				printf("#\t");
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
	int iValue1 = 0,iValue2 = 0;

	printf("Enter number of rows and columns :");
	scanf("%d%d",&iValue1,&iValue2);

	Pattern(iValue1,iValue2);

	return 0;
}