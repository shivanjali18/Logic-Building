/*Problem Statement : Write java program which accept N Number from user and return defference between summation of even and odd wlwmwnts .
Input : N - 6
		Elements : 85 66 3 80 93 88
Output : 53 (234-181)
*/
import java.util.*;

class ArrayDemo
{
	public int Difference(int Arr[])
	{
		int iCnt=0,iSumEven=0,iSumOdd=0;
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 2)==0)
			{
				iSumEven=iSumEven + Arr[iCnt];
			}
			else
			{
				iSumOdd=iSumOdd + Arr[iCnt];
			}
		}
		return(iSumEven-iSumOdd);
	}
}
class Program1
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
		iRet=aobj.Difference(Arr);

		System.out.println("Difference between summation of even and odd:"+iRet);
	}
}