#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head;

void createlist(int n);
void insertnode(int data);
void displaylist();

int main()
{
	int n,data;
	printf("enter no. of nodes");
	scanf("%d",&n);
	createlist(n);
	
	printf("data in the list");
	displaylist();
	
	printf("enter data to be inserted");
	scanf("%d",&data);
	insertnode(data);
	
	printf("data in the list");
	displaylist();\
	
	return 0;
}

void createlist(int n)
{
	struct node *newnode, *temp;
	int data,i;
	
	head=(struct node*)malloc(sizeof(struct node));
	
	if(head==NULL)
	{
		printf("unable to locate memory");
	}
	else
	{
		printf("enter the data of node 1");
		scanf("%d",&data);
		head->data=data;
		head->next=NULL;
		temp=head;
		
		for(i=2;i<=n;i++)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			if(newnode==NULL)
			{
				printf("unable to allocate memory");break;
			}
			else
			{
				printf("enter the data of node %d",i);
				scanf("%d",&data);
				newnode->data=data;
				newnode->next=NULL;
				temp=temp->next;
			}
		}
		printf("list created");
	 } 
}

void insertnode(int data)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("unable to locate memory");
	}
	else
	{
		newnode->data=data;
		newnode->next=head;
		head=newnode;
		printf("data inserted");
	}
}

void displaylist()
{
	struct node*temp;
	if(head==NULL)
	{
		printf("empty list");
	}
	else
	{
		temp=head;
		while(temp != NULL)
		{
			printf("data = %d",temp->data);
			temp=temp->next;
		}
	}
}






















