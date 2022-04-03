//binary search tree

#include <stdio.h>
#include <stdlib.h>

typedef struct binarysearch{
    int data;
    struct binarysearch *left;
    struct binarysearch *right;
}BST;

BST* create(BST*,int);
BST* inorder(BST*);
BST* postorder(BST*);
BST* preorder(BST*);


void main(){
    printf("\n1.create\n2.inorder\n3.preorder\n4.postorder\n5.exit\n");
    int ch,data,n;
    BST *root=NULL;
    while(1){
        printf("Enter the choice\n");
        scanf(" %d",&ch);
        switch(ch){
            case 1:printf("\nEnter the number of nodes\n");
                    scanf("%d",&n);
                    for(int i=0;i<n;i++)
                    {
                        printf("\nEnter the data\n");
                        scanf(" %d",&data);
                        root=create(root,data);
                    }
                    break;
            case 2:root=inorder(root);
                break;
            case 3:root=preorder(root);
                break;
            case 4:root=postorder(root);
                break;
            case 5:exit(0);
        }
    }
}

BST* create(BST* root,int item){
    if(root==NULL){
        root=(BST*)malloc(sizeof(BST));
        root->data=item;
        root->left=NULL;
        root->right=NULL;
    }
    else if(item>root->data){
        root->right=create(root->right,item);
    }
    else if(item<root->data){
        root->left= create(root->left,item);
    }
    else
        printf("Duplicate item not allowed");
}

BST* inorder(BST* root) {
    if (root!=NULL) {
    root->left=inorder(root->left);
        printf("%d\t",root->data);
    root->right=inorder(root->right);
    }
}

BST* preorder(BST* root) {
    if (root != NULL) {
        printf("%d\t", root->data);
        root->left=preorder(root->left);\
       root->right=preorder(root->right);
    }
}

BST* postorder(BST* root) {
    if (root != NULL) {
        root->left= postorder(root->left);
        root->right=postorder(root->right);
        printf("%d\t", root->data);
    }
}