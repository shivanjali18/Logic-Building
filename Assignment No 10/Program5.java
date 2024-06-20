//Problem Statement : Write a Program which accept range from user and display number in between that range in reverse order
//(range should contain positive numbers only)
//Input : 23 30
//Output :  30 29 28 27 26	25 24 23  
// Input : -10 2
//Output : 2 1 0 -1 -2 -3 -4 -5  -6 -7 -8 -9 -10 
// Input : 90 18
//Output :  Invalid range
//Input : 10 18
//Output :  18 17 16 15 14 13 12 11 10
import java.io.*;

class Program5
{
	public static void RangeDisplayRev(int iStart,int iEnd)
	{
		if(iStart > iEnd)
		{
			System.out.print("invalid range");
		}
		for(int i=iEnd;iStart<=i;i--)
		{
			System.out.print(i);
			System.out.print("\t");
		}
	}
	public static void main(String args[]) throws Exception
	{
		int iValue1=0,iValue2=0,iRet=0;
		BufferedReader bobj= new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Starting Point");
		iValue1=Integer.parseInt(bobj.readLine());


		System.out.println("Enter Ending Point");
		iValue2=Integer.parseInt(bobj.readLine());

		RangeDisplayRev(iValue1,iValue2);
		
	}
}