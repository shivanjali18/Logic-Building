/* Problem statement : Write a program which accept one number from user and off 7 bit and 10 bit of that number if it is on.return modified number.
Input : 577
Output : 1
*/
import java.util.*;

class Program2
{
	public static int OffBit(int iNo)
	{
		int iResult=0;
		int iMask=0x00000240;

		iResult = iNo & iMask;

		if(iResult == iMask)
		{
			return (iNo ^ iMask);
		}
		else
		{
			return iNo;
		}
	}
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		int iNo=0;
		System.out.println("Enter the Number :");
		iNo=sobj.nextInt();

		int iRet=0;

		iRet=OffBit(iNo);
		System.out.println("Modified Number :"+iRet);
	}
}