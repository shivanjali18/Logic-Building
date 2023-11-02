//Problem Statement : Accept N numbers from user and return difference between frequency of even numbers and odd numbers.
// Input : N : 7
//         Elements : 85 66 3 80 93 88 90
//Output : 1(4-3)
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
    int iEvenFreq=0,iOddFreq=0;
    for(int iCnt=0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt]%2 == 0))
        {
            iEvenFreq++;
        }
        else
        {
            iOddFreq++;
        }
    }
    return (iEvenFreq - iOddFreq);
}
int main()
{
    int iSize=0 ,iRet=0 ;
    int *ptr= NULL;

    printf("Enter the number of elements :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    
    for(int iCnt =0;iCnt < iSize;iCnt++)
    {
        printf("Enter the Elements :%d\n",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }
    if(ptr == NULL)
    {
        printf("unable to allocate the memory");
        return -1;
    }
     iRet=Frequency(ptr,iSize);
     printf("Difference between frequency of even number and odd number:%d",iRet);
     free(ptr);
    return 0;
}