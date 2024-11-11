#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head,*tail;
void create()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void insert_begin(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insert_end(){
     struct node *newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the data");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void delete_begin(){
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    head->prev=NULL;
}
void delete_at_end(){
   struct node *ptr=tail->prev;
   tail=ptr;
   ptr=ptr->next;
   tail->next=NULL;
   free(ptr);   
}
void display(){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    int choice;
    do {
        printf(" enter the choice:");
        scanf("%d ",&choice);
    switch (choice)
    {
    case 1:
     create();
        break;
    case 2:
    insert_begin();
    break;
    case 3:
    insert_end();
    break;
    case 4:
    delete_begin();
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

