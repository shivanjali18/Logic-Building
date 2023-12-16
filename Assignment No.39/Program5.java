/*Problem Statement :Write a Program which accept one number and position from user and check whether bit at that position and toggle that bit and return modified data.
Input : 10 3
Output : 14
*/
import java.util.*;

class Program5
{
	public static int CheckBit(int iNo,int ipos)
	{
		int iMask=0x00000001,iResult=0;

		iMask=iMask << (ipos-1);

		iResult=iNo ^ iMask;
	
		
			return (iNo ^ iMask);
		
	
		

	}
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);

		int iNo=0,ipos=0,iret=0;
		System.out.println("Enter the Number :");
		iNo=sobj.nextInt();

		System.out.println("Enter Position :");
		ipos=sobj.nextInt();

		iret=CheckBit(iNo,ipos);
	
		System.out.print("Modified code :"+iret);
		
		
		
		
	}
}
