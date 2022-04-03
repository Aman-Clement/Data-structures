//stacks using LL


#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int data;
    struct stack *next;
}stack;
stack *head=NULL;
stack *ptr=NULL;
int top=-1;

void push(int data){
    stack *newnode=(stack*)malloc(sizeof (stack));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}

void pop(){
    stack *temp;
    if(head==NULL){
        printf("\nThe stack si empty");
        return;
    }
    temp=head;
    head=temp->next;
    free(temp);
}

void display(){
    if(head==NULL){
        printf("\nThe list is empty\n");
        return;
    }
    ptr=head;
    while(ptr!=NULL){
        printf("\t%d->",ptr->data);
        ptr=ptr->next;
    }

}

void main(){
    int ch,data;
    printf("\nEnter \n1.push\n2.pop\n3.display\nexit\n");
    while(1) {
        printf("\nEnter your choice\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("\nEnter the data\n");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
}