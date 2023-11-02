//Problem Statement : Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
// Input : N : 6
//         Elements : 85 66 3 80 93 88
//Output : 53 (234 - 181)
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iCnt=0,isum=0,iodd=0;
    for(iCnt =0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            isum = isum + Arr[iCnt];
        }
        else
        {
            iodd = iodd + Arr[iCnt];
        }
    }
    return (isum- iodd);
        
}
int main()
{
    int iSize = 0,iRet=0,iCnt=0;
    int *ptr = NULL;

    printf("enter the number of elements :");
    scanf("%d",&iSize);
    ptr=(int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("unable to allocate the memory");
        return -1;
    }
    for(iCnt =0;iCnt < iSize;iCnt++)
    {
        printf("enter element : %d\n",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    } 
    iRet = Difference(ptr,iSize);
    printf("Difference between summation of even elements and summmation of odd :%d",iRet);
    free(ptr);
    return 0;

}