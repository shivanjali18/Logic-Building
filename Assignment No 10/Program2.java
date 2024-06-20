//Problem Statement : Write a Program which accept range from user and display all Even number in that range
//Input : 23 35
//Output :  24  26  28  30  32  34 
// Input : -10 2
//Output : -10  -8  -6  -4  -2 - 0  2 
// Input : 90 18
//Output :  Invalid range 
import java.io.*;

class Program2
{
	public static void RangeDisplayEven(int iStart,int iEnd)
	{
		if(iStart>iEnd)
		{
			System.out.println("Invalid Range");
		}
		for(;iStart<=iEnd;iStart++)
		{
			if(iStart%2==0)
			{
				System.out.print(iStart);
			System.out.print("\t");
			}
			
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

		RangeDisplayEven(iValue1,iValue2);
	}
}