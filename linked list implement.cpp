#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node * next;
};

struct node *start=NULL;
struct node* createll(struct node *);
struct node *display(struct node *);
struct  node * insert_beg(struct node *);
struct node * insert_end(struct node *);
struct node *del_beg(struct node *);

int main()
{
int option;
do
{
printf("\n\nMAIN MEDNU");
printf("\n1. Create a list");
printf("\n2. Display a list");
printf("\n 3. add a node in the beginning");
printf("\n 4. add a node in the end");
printf("\n 5. delete the first node");
printf("\n 13.exit");
printf("\n\n enter your option:");
scanf("%d",&option);
switch(option)
{
 case 1:createll(start);
 printf("\n link list is created");
	break;
 case 2: display(start);
	 break;
 case 3: insert_beg(start);
	 break;
case 4: insert_end(start);
	break;
case 5: del_beg(start);
	 break;
 }
 }while(option!=13);
 getch();
 }

struct node *createll(struct node * start)
{
struct node * new_node,*ptr;
int num;
printf("enter -1 to end");
printf("\n Enetr the data");
scanf("%d",&num);
while(num!=-1)
{
new_node=(struct node *)malloc(sizeof(struct node));
new_node->data=num;
if(start==NULL)
{
new_node->next=NULL;
start=new_node;
}
else
{
ptr=start;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=new_node;
new_node->next=NULL;
}
printf("enter the data");
scanf("%d",&num);
}
return 0;
}
struct node* display(struct node * start)
{
struct node *ptr;
ptr=start;
while(ptr!=NULL)
{
printf("\n%d", ptr->data);
ptr=ptr->next;
}
return  0;
}
struct node* insert_beg(struct node * start)
{
struct node *new_node;
int num;
printf("enter the data");
scanf("%d",&num);
new_node=(struct node *) malloc(sizeof(struct node*));
new_node->data=num;
new_node->next= start;
start= new_node;
return 0;
}
struct node * insert_end(struct node * start)
{
struct node *new_node,*ptr;
int num;
printf("enter the data");
scanf("%d",&num);
new_node=(struct node *) malloc(sizeof(struct node*));
new_node->data=num;
ptr=start;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=new_node;
new_node->next=NULL;
return 0;
}
struct node * del_beg(struct node * start)
{
struct node * ptr;
ptr=start;
start=start->next;
free(ptr);
return 0;
}

