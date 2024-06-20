//Problem Statement : Write a Program which accept range from user and return addition of all Even number in between that range
//(range should contain positive numbers only)
//Input : 23 30
//Output :  108 
// Input : -10 2
//Output : Invalid range 
// Input : 90 18
//Output :  Invalid range 
//Input : 10 18
//Output :  70 
import java.io.*;

class Program4
{
	public static int RangeSumEven(int iStart,int iEnd)
	{
		int iSum=0;
		if(iStart>iEnd || iStart < 0)
		{
			System.out.println("Invalid Range");
			return -1;
		}
		for(;iStart<=iEnd;iStart++)
		{
			if(iStart %2==0)
			{
					iSum=iSum+iStart;
			}
		
			
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

		iRet=RangeSumEven(iValue1,iValue2);
		System.out.println("Addition is "+iRet);
	}
}