/*Problem Statement :Write a Program which accept one number and whether that 5 bit and 18 bit is on or off.
Input :  
Output : 
*/
import java.util.*;

class Program2
{
	public static boolean ChkBit(int iNo)
	{
		int iMask=0x00020010,iResult=0;

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
			System.out.println("15 bit & 5 bit is on");
		}
		else
		{
			System.out.println("15 bit & 5 bit is off");
		}
		
	}
}	
		