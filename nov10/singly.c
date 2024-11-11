#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*tail=NULL;
void create()
{
   struct node *newnode = (struct node*) malloc(sizeof(struct node));
   int value;
   printf("enter the data");
   scanf("%d",&value);
   newnode->data=value;
   newnode->next=NULL;
   if(head==NULL)
{  
    head=tail=NULL;
}else
{
    tail->next=newnode;
    tail=newnode;
}
}
void insert_at_the_begin(){
    struct node *newnode = (struct node*) malloc(sizeof(struct node));
   int value;
   printf("enter the data");
   scanf("%d",&value);
   newnode->data=value;
   newnode->next=NULL;
   newnode->next=head;
   head=newnode;
  
}
void insert_at_the_end(){
      struct node *newnode = (struct node*) malloc(sizeof(struct node));
   int value;
   printf("enter the data");
   scanf("%d",&value);
   newnode->data=value;
   newnode->next=NULL;
   tail->next=newnode;
   tail=newnode;
}
void delete_at_begin(){ 
    struct node *ptr=head;
    head=head->next;
    free(ptr);
}
void delete_at_end(){
    struct node *ptr=head;
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    tail=ptr;
    ptr=ptr->next;
    free(ptr);
    tail->next=NULL;
}
void display(){
    struct node*ptr3=head;
    while(ptr3!=NULL){
        ptr3=ptr3->next;
    }
}
int main(){
    int choice;
    do {
        printf(" enter the choice");
        scanf("%d",&choice);
    switch (choice)
    {
    case 1:
     create();
        break;
    case 2:
    insert_at_the_begin();
    break;
    case 3:
    insert_at_the_end();
    break;
    case 4:
    delete_at_begin();
    break;
    case 5:
    delete_at_end();
    break;
    case 6:
    display();
    break;
    
    default:
    printf("invalid choice");
        break;
    }
    } while (choice!=0);
} 

