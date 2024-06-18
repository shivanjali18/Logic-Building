//Write a Program which accept name from user and print that name.
//Input : Piyush Khainar
//Output : Piyush Khainar

#include<stdio.h>

int main()
{
	char Name[30];
	printf("Please enter the name :");
	scanf("%[^'\n']s",&Name);
	printf("Your name is %s",Name);
	return 0;
}