/* Problem Statement : Write a Program which return addition of all elements from singly linear linked list.
Function Prototype : 
int Addition(PNODE Head);
Input linklist : |10|->|20|->|30|->|40|
Output : 100
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

int Addition(PNODE Head)
{
	int iSum=0;

	while(Head != NULL)
	{
		iSum = iSum + (Head)->data;
		Head=Head->next;
	}
	return iSum;
}

int main()
{
	PNODE First = NULL;
	int iRet=0;

	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);

	Display(First);

	iRet=Addition(First);
	printf("\n Addition are :%d\n",iRet);

	return 0;
}