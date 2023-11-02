//Problem Statement : Accept N numbers from user and accept one another number as No return frequency of No from it.
// Input : N : 6  2
//         Elements : 85 66 3 80 93 88
//Output : 0
// Input : N : 6  11
//         Elements : 85 11 3 80 11 111
//Output : 2
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength ,int iNo)
{
    int iFrequency=0;
    for(int iCnt=0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] == iNo))
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int iSize=0 ,iRet=0 ,iValue=0;
    int *ptr= NULL;

    printf("Enter the number of elements :");
    scanf("%d",&iSize);

    printf("Enter the number of elements which you frequency :");
    scanf("%d",&iValue);

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
     iRet=Frequency(ptr,iSize,iValue);
     printf("frequency is:%d",iRet);
     free(ptr);
    return 0;
}