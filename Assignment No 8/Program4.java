//Problem statement : Write a Program to find odd factorial of given number.
//Input : 5
//Output : 15 (5*3*1)
//Input : -5
//Output : 15 (5*3*1)
//Input : 10
//Output : 945 (9*7*5*3*1)
import java.util.*;
class Factorial
{
	public static int OddFactorial(int iNo)
	{
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		int iFact=1;
		for(int i=iNo;i>=1;i--)
		{
			if(i%2 != 0)
			{
				iFact=iFact*i;
			}
		}
		return iFact;
	}
}
class Program4
{
	public static void main(String args[])
	{
		int iValue=0,iRet=0;
		Scanner sobj=new Scanner(System.in);
		Factorial fobj=new Factorial();

		System.out.println("Enter the number ");
		iValue=sobj.nextInt();

		iRet=fobj.OddFactorial(iValue);

		System.out.println("Odd Factorial of number is "+iRet);
	}
}