//Problem Statement : Accept N numbers from user and return frequency of 11 from it.
// Input : N : 6
//         Elements : 85 66 3 80 93 88
//Output : 0
// Input : N : 6
//         Elements : 85 11 3 80 11 111
//Output : 2
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
    int iFrequency=0;
    for(int iCnt=0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] == 11))
        {
            iFrequency++;
        }
    }
    return iFrequency;
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
     printf("frequency of 11:%d",iRet);
     free(ptr);
    return 0;
}