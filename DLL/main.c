//dll


#include <stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;

node *head=NULL;
node *tail=NULL;

node* create(){
    node *new=(node*)malloc(sizeof (node));
    printf("\nEnter the data:\n");
    scanf("%d",&new->data);
    new->right=NULL;
    new->left=NULL;
    return new;
}

node* search(int data){
    if(head==NULL){
        printf("\nThe list is empty\n");
        return NULL;
    }
    node *ptr=head;
    while(ptr!=NULL){
        if(ptr->data==data)
            return ptr;
        ptr=ptr->right;
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
    new->right=head;
    head->left=new;
    head=new;
}

void insertend(){
    if(head==NULL){
        insertbeg();
        return;
    }
    node *new=create();
    tail->right=new;
    new->left=tail;
    tail=new;
}

void insertany(){
    if(head==NULL){
        insertbeg();
        return;
    }
    int ch,data;
    printf("\nEnter 0 to insert before and 1 to insert after:\n ");
    scanf("%d",&ch);
    printf("\nEnter the adjacent node\n");
    scanf("%d",&data);
    node *ptr= search(data);
    if(ptr==NULL){
        printf("\nThe node doesnt exits");
        return;
    }
    node *temp=head;
    if(ch==0){
        if(ptr==head){
            insertbeg();
            return;
        }
        node *new=create();
        ptr->left->right=new;
        new->left=ptr->left;
        new->right=ptr;
        ptr->left=new;
    }
    if(ch==1){
        if(ptr->right==NULL){
            insertend();
            return;
        }
        node *new=create();
        ptr->right->left=new;
        new->right=ptr->right;
        ptr->right=new;
        new->left=ptr;
    }
}

void delete(){
    int del;
    printf("\nEnter the data to be deleted\n");
    scanf("%d",&del);
    node *ptr= search(del);
    if(ptr==NULL){
        printf("\nThe node doesnt exist\n");
        return;
    }
    if(ptr==head){
        node *temp=head;
        head=temp->right;
        head->left=NULL;
        free(temp);
        return;
    }
    if(ptr==tail){
        node *temp=tail;
        tail=temp->left;
        tail->right=NULL;
        free(temp);
        return;
    }
    ptr->left->right=ptr->right;
    ptr->right->left=ptr->left;
    free(ptr);
}

void display(){
    if(head==NULL){
        printf("\nThe list is empty\n");
        return;
    }
    node *ptr=head;
    while(ptr!=NULL){
        printf("\t%d->",ptr->data);
        ptr=ptr->right;
    }
}

void main(){
    int ch;
    printf("\nEnter\n1.Insertbeg\n2.Insertend\n3.InsertAny\n4.delete\n5.display\n6.exit\n");
    while(1){
        printf("\nEnter your choice\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                insertbeg();
                break;
            case 2:
                insertend();
                break;
            case 3:
                insertany();
                break;
            case 4:delete();
                break;
            case 5:display();
                break;
            case 6:
                exit(0);
            default:
                printf("\nInvalid option\n");
        }
    }
}