//queues using linked list

#include <stdio.h>
#include "stdlib.h"

typedef struct qu{
    int data;
    struct qu *next;
}queue;

queue *head=NULL;
void enqueue(){
    queue *new=(queue *)malloc(sizeof(queue));
    printf("\nEnter the data\n");
    scanf("%d",&new->data);
    new->next=NULL;
    if(head==NULL){
        head=new;
        return;
    }
    queue *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=new;
}

void dequeue(){
    if(head==NULL){
        printf("\nThe queue is empty\n");
        return;
    }
    queue *temp=head;
    head=temp->next;
    free(temp);
}

void display(){
    if(head==NULL){
        printf("\nThe queu is empty\n");
        return;
    }
    queue *ptr=head;
    while(ptr!=NULL){
        printf("\t%d->",ptr->data);
        ptr=ptr->next;
    }
}

void main(){
    int ch;
    printf("\nEnter\n1.Enqueue\n2.Dequeue\n3.Display\n.4.Exit\n");
    while (1){
        printf("\nEnter your choice\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1:enqueue();
                break;
            case 2:dequeue();
                break;
            case 3:display();
                break;
            case 4:
                exit(0);
        }
    }
}