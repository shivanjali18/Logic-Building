/* Problem Statement : Write a Program which return smallest elements from singly linear linked list.
Function Prototype : 
int Minimum(PNODE Head);
Input linklist : |110|->|230|->|20|->|240|
Output : 20
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;

	if(*Head == NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("| %d |->",Head->data);
		Head=Head->next;
	}
}

int Minimum(PNODE Head)
{
	int iMin=Head->data;

	while(Head != NULL)
	{
		if(iMin > Head->data)
		{
			iMin=Head->data;
		}
		Head=Head->next;
	}
	return iMin;
}

int main()
{
	PNODE First = NULL;
	int iRet=0;

	InsertFirst(&First,240);
	InsertFirst(&First,20);
	InsertFirst(&First,230);
	InsertFirst(&First,110);

	Display(First);

	iRet=Minimum(First);
	printf("\n Smallest element are :%d\n",iRet);

	return 0;
}