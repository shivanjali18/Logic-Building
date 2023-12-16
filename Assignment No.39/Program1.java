/*Problem Statement :Write a Program which accept one number and position from user and check whether bit at that position is on or off.If bit is one return TRUE otherwise return FALSE.
Input : 10 2
Output : TRUE
*/
import java.util.*;

class Program1
{
	public static boolean ChkBit(int iNo,int ipos)
	{
		
		int iMask=0x00000001,iResult=0;

		iMask=iMask << (ipos-1);

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
		int ipos =0;
		boolean bret=false;

		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the Number :");
		iNo = sobj.nextInt();

		System.out.println("Enter the Position :");
		ipos = sobj.nextInt();
		
		bret = ChkBit(iNo,ipos);
		if(bret == true)
		{
			System.out.println(" Bit is 1");
		}
		else
		{
			System.out.println("Bit is 0");
		}
	}
}