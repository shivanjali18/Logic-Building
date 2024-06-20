//Problem Statement : Accept Amount in US dollar and return its corresponding value in indian currency.consider 1$ as 70 rupees
//Input : 10
//Output :700
//Input : 3
//Output :270
//Input : 1200
//Output :8400
import java.util.*;
class Dollar
{
	public static int DollarToINR(int iNo)
	{
		return (iNo * 70);
	}
}
class Program2
{
	public static void main(String args[])
	{
		int ivalue=0,iret=0;

		Scanner sobj=new Scanner(System.in);
		Dollar dobj=new Dollar();
		System.out.println("Enter the number of USD");
		ivalue=sobj.nextInt();

		iret=dobj.DollarToINR(ivalue);

		System.out.println("value in INR is "+ iret);

	}
}