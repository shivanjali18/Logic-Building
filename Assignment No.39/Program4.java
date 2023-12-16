/*Problem Statement :Write a Program which accept one number and position from user and check whether bit at that position and toggle that bit and return modified data.
Input : 10 3
Output : 14
*/
import java.util.*;

class Program4
{
	public static int ToggleBit(int iNo,int ipos)
	{
		
		int iMask=0x00000001,iResult=0;

		iMask=iMask << (ipos-1);

		iResult=iNo ^ iMask;
		return iResult;
			 
	}
	public static void main(String args[])
	{
		int iNo = 0;
		int ipos =0;
		int iret=0;

		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the Number :");
		iNo = sobj.nextInt();

		System.out.println("Enter the Position :");
		ipos = sobj.nextInt();
		
		iret = ToggleBit(iNo,ipos);
		
		System.out.println("Modified code :"+iret);
	}
}