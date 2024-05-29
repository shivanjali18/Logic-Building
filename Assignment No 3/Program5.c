//Write a program which accept one character from user and check whether that character is vowel or not.
//Input : d
//Output : FALSE
#include<stdio.h> 
#include<stdbool.h>
#define true 1
#define false 0
bool DisplayVowel(char cValue)
{
	if(((cValue == 'A')||(cValue == 'a'))||(cValue == 'E')||(cValue == 'e')||(cValue == 'I')||(cValue == 'i')||(cValue == 'O')||(cValue == 'o')||(cValue == 'U')||(cValue == 'u'))
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int main()
{
	char cValue='\0';
	bool bRet=false;
	printf("Enter character\n");

	scanf("%c",&cValue);

	bRet=DisplayVowel(cValue);

	if(bRet==true)
	{
		printf("It is a vowel\n");
	}
	else 
	{
		printf("It is not a vowel\n");
	}
	return 0;
}