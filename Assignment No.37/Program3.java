/*Problem Statement :Write a Program which accept one number and whether that 7 bit,21 bit,28 bit,15 bit is on or off.
Input : 10 
Output : off
*/
import java.util.*;

class Program3
{
	public static boolean ChkBit(int iNo)
	{
		int iMask=0x08104040,iResult=0;

		iResult=iNo & iMask;
		if(iResult == iMask)
		{
			return true;
		}
		else
		{
			return false;
		}
			 
	}
	public static void main(String args[])
	{
		int iNo = 0;
		Boolean bret=false;

		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the Number :");
		iNo = sobj.nextInt();
		
		bret = ChkBit(iNo);
		if(bret == true)
		{
			System.out.println("7,21,28,15 bit is on");
		}
		else
		{
			System.out.println("7,21,28,15 bit is off");
		}
		
	}
}	
		