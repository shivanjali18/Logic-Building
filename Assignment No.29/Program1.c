/* Problem Statement : Write a Program which search first occurence of particular elements from singly linear linked list.
Function should return position at which elements is found.
Function Prototype : 
int SearchFirstOcc(PNODE,int no);
Input linklist : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input Element : 30
Output : 3
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

int SearchFirstOcc(PNODE Head,int no)
{
	int ipos=1;
	while(Head != NULL)
	{
		if(Head->data == no)
		{
			break;
		}
		Head=Head->next;
		ipos++;
	}

	if(Head == NULL)
	{
		return -1;
	}
	else
	{
		return ipos;
	}

}

int main()
{
	PNODE First = NULL;
	int iRet=0;
	int iValue=0;

	InsertFirst(&First,70);
	InsertFirst(&First,30);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);

	Display(First);

	printf("\nEnter the element that you want to search first occurence :\n");
	scanf("%d",&iValue);

	iRet=SearchFirstOcc(First,iValue);
	printf(" element found at position :%d\n",iRet);

	return 0;
}