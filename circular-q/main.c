#include <stdio.h>
#include <ctype.h>
#include "stdlib.h"
#define SIZE 5

 int queue[SIZE];
int front=-1,rear=-1;

void enqueue(int item){
    if(rear==SIZE-1&&front==0||front==rear+1){
        printf("\nThe queue is full\n");
    }
    else
    {
        if(rear==SIZE-1&&front!=0){
            rear=-1;
        }
    if(front==-1){
        front=0;
    }
        queue[++rear]=item;
    }
}

void dequeue() {
    if (front ==-1&&rear==-1) {
        printf("The queue is empty");
    }
    else {
        int del = queue[front++];
        printf("\nThe deleted item is %d\n", del);
        if (front == rear +1){
            front=-1;
            rear=-1;
        }
        if (front == SIZE )
            front = 0;
    }
}

void display(){
    if(front==-1&&rear==-1){
        printf("\nThe queue is empty");
    }
    if(front<=rear)
    {
        for(int i=front;i<=rear;i++){
            printf("\n%d\n",queue[i]);
        }
    }
    else{
        for(int i=front;i<SIZE;i++){
            printf("\n%d\n",queue[i]);
        }
        for(int i=0;i<=rear;i++){
            printf("%d\n",queue[i]);
        }
    }
}

void main(){
    int item,ch;
    printf("\n1.ENqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    while(1){
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the elements\n");
                scanf("%d",&item);
                enqueue(item);
                break;
            case 2:dequeue();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
            default:printf("Invalid option");
        }
    }
}