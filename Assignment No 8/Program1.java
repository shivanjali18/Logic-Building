//Problemstatement : write a program which accept number from user and display below pattern
//Input : 5
//Output : * * * * * # # # # #
//Input : 3
//Output : * * * # # # 

import java.util.*;

class Program1
{
	public static void Display(int iNo)
	{
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		int i=0,j=0;
		for(i=1;i<=iNo;i++)
		{
			System.out.print("*\t");
		}
		for(j=1;j<=iNo;j++)
		{
			System.out.print("#\t");
		}
	}
	public static void main(String args[])
	{
		int ivalue=0;
		Scanner sobj= new Scanner(System.in);
		System.out.println("Enter the number:");
		ivalue=sobj.nextInt();
		Display(ivalue);
	}
	
}