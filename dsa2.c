#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;};
void LLT(struct Node *ptr)
{ while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->next;}
}
//case1
struct Node * insertAtFirst(struct Node *head,int data)
{

    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

int main(){
struct Node *head;
struct Node *second;
struct Node *third;
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
head->data=7;
head->next=second;
second->data=4;
second->next=third;
third->data=8;
third->next=NULL;
printf("LLT B4 INSERTION\n");
LLT(head);
head=insertAtFirst(head,56);
printf("LLT after INSERTION\n");
LLT(head);
return 0;
}
