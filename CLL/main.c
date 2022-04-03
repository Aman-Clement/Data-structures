//circular lll

#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;

node* head=NULL;
node* tail=NULL;

node* create(){
    node* newptr=(node*)malloc(sizeof(node));
    printf("\nEnter the data\n");
    scanf("%d",&newptr->data);
    newptr->next=NULL;
    return newptr;
}

node* search(int data){
    node* ptr=head;
    if(head==NULL){
        return NULL;
    }
    while(ptr!=NULL){
        if(ptr->data==data)
            return ptr;
        ptr=ptr->next;
    }
}

void insertbeg(){
    if(head==NULL){
        node *new=create();
        head=new;
        tail=new;
        return;
    }
    node* new=create();
    new->next=head;
    head=new;
    tail->next=head;
}

void insertend(){
    if(head==NULL){
        insertbeg();
        return;
    }
    node *new=create();
    tail->next=new;
    tail=new;
    tail->next=head;
}

void insertany(){
    if(head==NULL){
        insertbeg();
        return;
    }
    int ch,data;
    printf("\nchoose 0 to insert before and 1 to insert after\n");
    scanf("%d",&ch);
    printf("\nEnter the adjacent node data\n");
    scanf("%d",&data);
    node* ptr= search(data);
    if(ptr==NULL){
        printf("Node not found!");
        return;
    }
    node *temp=head;
    if(ch==0){
        if(ptr==head){
            insertbeg();
            return;
        }
        while (temp->next!=ptr){
            temp=temp->next;
        }
        node *new=create();
        new->next=ptr;
        temp->next=new;
        return;
    }
    else if(ch==1){
        if(ptr==head){
            insertend();
            return;
        }
        node* new=create();
        new->next=ptr->next;
        ptr->next=new;
        return;
    }
    else{
        printf("\nInvalid choice\n");
        return;
    }
}

void delete(){
    if(head==NULL) {
        printf("\nNo data to be deleted\n");
        return;
    }
    int data;
    printf("\nEnter the data to be deleted\n");
    scanf("%d",&data);
    node* ptr= search(data);
    if(ptr==NULL){
        printf("\nNode doesnt exist\n");
        return;
    }
    node *temp=head;
    if(ptr==head){
        printf("\nDeleting head node\n");
        head=ptr->next;
        tail->next=head;
        free(ptr);
        return;
    }
    while(temp->next!=ptr){
        temp=temp->next;
    }
    temp->next=ptr->next;
    if(ptr==tail)
        tail=temp;
    free(ptr);
    return;
}

void display(){
    if(head==NULL){
        printf("\nNo data to be displayed\n");
        return;
    }
    node *ptr=head;
    do{
       printf("\t%d->",ptr->data);
       ptr=ptr->next;
    }while(ptr!=head);
}

void main(){
    int choice;
    printf("\nEnter \n1.Insertbeg\n2.InsertEnd\n3.InsertAny\n4.Deleteany\n5.display\n6.Exit\n");
    while(1){
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch (choice) {
            case 1:insertbeg();
                break;
            case 2:insertend();
                break;
            case 3:insertany();
                break;
            case 4:delete();
                break;
            case 5:display();
                break;
            case 6:exit(0);}}}