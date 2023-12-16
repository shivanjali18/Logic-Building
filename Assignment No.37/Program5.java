/*Problem Statement :Write a Program which accept one number and whether that 1,32 bit is on or off.
Input : 10 
Output : off
*/
import java.util.*;

class Program5
{
	public static boolean ChkBit(long iNo)
	{
		long iMask=0x80000001,iResult=0L;

		iResult=iNo | iMask;
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
		long iNo = 0l;
		Boolean bret=false;

		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the Number :");
		iNo = sobj.nextLong();
		
		bret = ChkBit(iNo);
		if(bret == true)
		{
			System.out.println("1,32 bit is on");
		}
		else
		{
			System.out.println("1,32 bit is off");
		}
		
	}
}	
		