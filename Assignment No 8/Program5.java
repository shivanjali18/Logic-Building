//Problem Statement : Write a Program which return difference between Even Factorial and Odd Factorialof given number.
//Input : 5
//Output : -7
//Input : -5
//Output : -7
//Input : 10
//Output : 2895
import java.io.*;

class Program5
{
	public static int FactorialDiff(int iValue)
	{
		if(iValue < 0)
		{
			iValue=-iValue;
		}
		int iEven=1,iOdd=1;
		for(int i=iValue;i>=1;i--)
		{
			if(i%2==0)
			{
				iEven=iEven*i;
			}
			else
			{
				iOdd=iOdd*i;
			}
		}
		return(iEven-iOdd);
	}
	public static void main(String args[])throws Exception
	{
		BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

		int iNo=0,iRet=0;

		System.out.println("Enter the number");
		iNo=Integer.parseInt(bobj.readLine());

		iRet=FactorialDiff(iNo);

		System.out.println("Factorial difference is "+iRet);
	}
}