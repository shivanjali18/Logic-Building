//Problem Statement : Accept N numbers from user and return frequency of even numbers.
// Input : N : 6
//         Elements : 85 66 3 80 93 88
//Output : 3
#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{
    int iFrequency=0;
    for(int iCnt=0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt]%2 == 0))
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
     iRet=CountEven(ptr,iSize);
     printf("frequency of even number:%d",iRet);
     free(ptr);
    return 0;
}