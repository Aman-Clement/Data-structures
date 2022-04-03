//binary trees

#include <stdio.h>
#include "stdlib.h"

typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}tree;

tree* create(){
    tree *new;
    int data;
    printf("\nEnter the data (-1 to exit)\n");
    scanf("%d",&data);
    if(data==-1)
        return NULL;
    new=(tree*)malloc(sizeof(tree));
    new->data=data;
    printf("\nEnter left child of %d ",data);
    new->left=create();
    printf("\nEnter right child of %d ",data);
    new->right=create();
    return new;
}

void preorder(tree* root){
    if(root==NULL)
        return;
    printf("\n%d",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(tree* root){
    if(root==NULL)
        return;
    inorder(root->left);
    printf("\n%d",root->data);
    inorder(root->right);
}

void postorder(tree* root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("\n%d",root->data);
}

void main() {
    int ch;
    printf("\nEnter the root node\n");
    tree *root = create();
    printf("\nEnter\n1.preorder\n2.postorder\n3.inorder");
    scanf("%d", &ch);
    while (1) {
        printf("\nEnter\n1.preorder\n2.postorder\n3.inorder");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                preorder(root);
                break;
            case 2:
                postorder(root);
                break;
            case 3:
                inorder(root);
                break;
            default:
                printf("Invalid option");

        }

    }
}