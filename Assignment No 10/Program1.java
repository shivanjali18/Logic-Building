//Problem Statement : Write a Program which accept range from user and display all number in that range
//Input : 23 35
//Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
// Input : -10 2
//Output : -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 
// Input : 90 18
//Output :  Invalid range 
import java.io.*;

class Program1
{
	public static void RangeDisplay(int iStart,int iEnd)
	{
		if(iStart>iEnd)
		{
			System.out.println("Invalid Range");
		}
		for(;iStart<=iEnd;iStart++)
		{
			System.out.print(iStart);
			System.out.print("\t");
		}
	}
	public static void main(String args[]) throws Exception
	{
		int iValue1=0,iValue2=0;
		BufferedReader bobj= new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Starting Point");
		iValue1=Integer.parseInt(bobj.readLine());


		System.out.println("Enter Ending Point");
		iValue2=Integer.parseInt(bobj.readLine());

		RangeDisplay(iValue1,iValue2);
	}
}