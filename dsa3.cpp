#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node* next;
};
struct Node* head;
void insert(int data,int n)
{
	Node *temp1= new Node();//used in c++ which is malloc in c
	temp1->data=data;//set data filled
	temp1->next=NULL;//link initially to null
	if(n==1)//insert at head or 1st position
	{
		temp1->next=head;
		head=temp1;
		return ;
	}
	Node* temp2=head;//create another pointer to node and start it a head 
	for(int i=0;i<n-2;i++)
	{
	temp2=temp2->next;	//by doing this n-2 times,we will point temp2 to n-1 node
	}
	temp1->next=temp2->next;//link fill of newly created node to n-1 node
	temp2->next=temp1;
}
void print()
{
	Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
}
int main(){
head =NULL;
insert(2,1);
insert(3,2);
insert(4,1);
insert(6,2);
print();}
