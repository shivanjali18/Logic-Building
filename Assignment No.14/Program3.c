//Problem Statement : Accept N numbers from user check whether that number contains 11 in it or not.
// Input : N : 6
//         Elements : 85 66 3 80 88 90
//Output : 11 is absent
// Input : N : 6
//         Elements : 85 11 3 80 88 90
//Output : 11 is Present

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength)
{
    for(int iCnt=0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] == 11))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}
int main()
{
    int iSize=0 ;
    BOOL bRet=FALSE ;
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
     bRet=Check(ptr,iSize);
     if(bRet == TRUE)
     {
        printf("11 is Present");
     }
     else
     {
        printf("11 is Absent");
     }
     free(ptr);
    return 0;
}