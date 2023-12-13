/* Problem statement : Write a program which accept one number from user and Toggle 7 bit and 10 bit of that number if it is on.return modified number.
Input : 137
Output : 713
*/
import java.util.*;

class Program4
{
	public static int ToggleBit(int iNo)
	{
		int iResult=0;
		int iMask=0x00000240;

		return (iNo ^ iMask);
		
		
	}
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		int iNo=0;
		System.out.println("Enter the Number :");
		iNo=sobj.nextInt();

		int iRet=0;

		iRet=ToggleBit(iNo);
		System.out.println("Modified Number :"+iRet);
	}
}