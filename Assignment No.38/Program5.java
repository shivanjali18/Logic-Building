/* Problem statement : Write a program which accept one number from user and on its first 4 bits return modified number.
Input : 73
Output : 79
*/
import java.util.*;

class Program5
{
	public static int OnBit(int iNo)
	{
		int iResult=0;
		int iMask=0x0000000f;

		return (iNo | iMask);
		
		
	}
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		int iNo=0;
		System.out.println("Enter the Number :");
		iNo=sobj.nextInt();

		int iRet=0;

		iRet=OnBit(iNo);
		System.out.println("Modified Number :"+iRet);
	}
}