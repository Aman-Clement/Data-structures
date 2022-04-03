//reverse linked list

#include "stdio.h"
#include "stdlib.h"

typedef struct node{
    int data;
    struct node *next;
}node;

node *head=NULL;
node *temp=NULL;

void create(){
    if(head==NULL){
        head=(node*) malloc(sizeof (node));
        printf("\nEnter the data\n");
        scanf("%d",&head->data);
        head->next=NULL;
        temp=head;
        return;
    }
    node *new=(node*)malloc(sizeof (node));
    printf("\nEnter the data\n");
    scanf("%d",&new->data);
    new->next=NULL;
    temp->next=new;
    temp=new;
}

void reverse() {
    node *prev = NULL;
    node *curr = NULL;
    if (head != NULL) {
        prev = head;
        curr = head->next;
        head = head->next;
        prev->next = NULL;

        while (head != NULL) {
            head = head->next;
            curr->next = prev;
            prev = curr;
            curr = head;
        }
        head = prev;
    }
}

    void display(){
    if(head==NULL){
        printf("\nThe list is empty\n");
        return;
    }
    node *ptr=head;
    while(ptr!=NULL){
        printf("\t%d->",ptr->data);
        ptr=ptr->next;
    }
}

void main(){
    int n;
    printf("\nEnter the number of nodes\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        create();
    }
    reverse();
    printf("\nThe reversed linked list is \n");
    display();
}