//Problem Statement :Write a Program to find even factorial of given number.
//Input : 5 
//Output : 8 (4*2)
//Input : -5 
//Output : 8 (4*2)
//Input : 10 
//Output : 3840 (10*8*6*4*2)

import java.util.*;
class Factorial
{
	public static int EvenFactorial(int iNo)
	{
		if(iNo < 0)
		{
			iNo =-iNo;
		}
		int iFact=1;
		for(int i=iNo;i>=1;i--)
		{
			if(i%2 == 0)
			{
				iFact=iFact*i;
			}
		}
		return iFact;
	}
}
class Program3 
{
	public static void main(String args[])
	{
		int iValue=0,iRet=0;
		Scanner sobj=new Scanner(System.in);
		Factorial fobj=new Factorial();
        try
        {
        	System.out.println("Enter the number :");
		iValue=sobj.nextInt();

		iRet=fobj.EvenFactorial(iValue);
		System.out.println("Even Factorial of Number : "+iRet);
        }	
        catch(Exception eobj)
        {
        	System.out.println("Exception occured");
        }
	}
}
