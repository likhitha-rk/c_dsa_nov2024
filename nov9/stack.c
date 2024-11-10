#include<stdio.h>
#define n 5
int top =-1;
int stack[n];
void push(){
    int data;
    printf("enter the data:");
    scanf("%d",&data);
    if( top==n-1)
    printf("ovberflow");
    else{
        top++;
        stack[top]=data;
    }
}
void pop(){
    if(top==-1)
    {
        printf("underflow");
    }else{
        top--;

    }
}
void peak(){
    if(top ==-1)
    {
        printf("empty");
    }else{
        printf("%d",stack[top]);
    }
}
void display(){
    for(int i=top;i>=0;i--){
        printf("%d",stack[i]);
    }
}
int main(){
    int choice;
    do
    {
        printf("enter the choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
         pop();
         break;
         case 3:
         peak();
         break;
         case 4:
         display();
         break;

        
        default:
        printf("inavlid choice");
        }
    } while (choice!=0);
} 
    
    

   