/*Problem Statement : Write java program which accept N Number from user and Display the all elemnets which are Multiple of 11 .
Input : N - 6
		Elements : 85 66 3 55 93 88
Output :66  55 88 
*/
import java.util.*;

class ArrayDemo
{
	public void Display(int Arr[])
	{
		int iCnt=0;
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 11)==0)
			{
				System.out.println("Multiples of 11 :"+Arr[iCnt]); 
			}
		
		}
		
	}
}
class Program5
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		ArrayDemo aobj=new ArrayDemo();

		int iSize=0,iCnt=0,iRet=0;
		System.out.println("Enter the Number:");
		iSize=sobj.nextInt();

		int Arr[]= new int[iSize];

		System.out.println("Enter the elements :"+ iCnt+1);
		for(iCnt=0;iCnt < iSize;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}
		aobj.Display(Arr);
	}
}