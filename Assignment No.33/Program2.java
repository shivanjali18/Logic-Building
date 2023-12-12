/*Problem Statement : Write java program which accept N Number from user and Display the elemnets which are divisible by 5 .
Input : N - 6
		Elements : 85 66 3 80 93 88
Output : 85 80 (234-181)
*/
import java.util.*;

class ArrayDemo
{
	public void Display(int Arr[])
	{
		int iCnt=0;
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 5)==0)
			{
				System.out.println("Elements divisible by 5 :"+Arr[iCnt]); 
			}
		
		}
		
	}
}
class Program2
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