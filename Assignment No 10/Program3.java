//Problem Statement : Write a Program which accept range from user and display addition of all number in between that range
//(range should contain positive numbers only)
//Input : 23 30
//Output :  212 
// Input : -10 2
//Output : Invalid range 
// Input : 90 18
//Output :  Invalid range 
import java.io.*;

class Program3
{
	public static int RangeSum(int iStart,int iEnd)
	{
		int iSum=0;
		if(iStart>iEnd || iStart < 0)
		{
			System.out.println("Invalid Range");
			return -1;
		}
		for(;iStart<=iEnd;iStart++)
		{
			iSum=iSum+iStart;
			
		}
		return iSum;
	}
	public static void main(String args[]) throws Exception
	{
		int iValue1=0,iValue2=0,iRet=0;
		BufferedReader bobj= new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Starting Point");
		iValue1=Integer.parseInt(bobj.readLine());


		System.out.println("Enter Ending Point");
		iValue2=Integer.parseInt(bobj.readLine());

		iRet=RangeSum(iValue1,iValue2);
		System.out.println("Addition is "+iRet);
	}
}