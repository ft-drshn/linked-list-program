#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head=NULL,*temp,*newNode;
	int val,pos,i;
	
	head=malloc(sizeof(struct node));
	head->data=10;
	head->next=NULL;
	
	newNode= malloc(sizeof(struct node));
	newNode->data=20;
	newNode->next=NULL;
	head->next=newNode;
	
	printf("\n Enter value and position:");
	scanf("%d %d",&val,&pos);
	
	newNode= malloc(sizeof(struct node));
	newNode->data=val;
	
	if(pos == 1)
	{
		newNode->next=head;
		head=newNode;
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
		    temp=temp->next;
		    
		    
			newNode->next=temp->next;
			temp->next=newNode;
		
	}
	printf("Insertion:");
	temp=head;
	while(temp != NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->next;
	}
	return 0;
}
