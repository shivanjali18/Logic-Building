//Problem Statement : Accept N numbers from user and Display all such elements which are multiple of 11.
// Input : N : 6
//         Elements : 85 66 3 55 93 88
//Output : 15
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    for(int iCnt=0;iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt]%11 == 0))
        {
            printf("Multiple of 11 :%d\n",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize=0 ;
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
     Display(ptr,iSize);
     free(ptr);
    return 0;
}