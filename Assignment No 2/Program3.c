//Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".

#include<stdio.h>

int Display (int iNo)
{
	if(iNo < 10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
	}
}

int main()
{
	int iValue=0;

	printf("Enter the Number :");
	scanf("%d",&iValue);

	Display(iValue);
	return 0;
}