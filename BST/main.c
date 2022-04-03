//binary search tree

#include <stdio.h>
#include <stdlib.h>

typedef struct binarysearch{
    int data;
    struct binarysearch *left;
    struct binarysearch *right;
}BST;

BST* create(BST*,int);
void inorder(BST*);
void postorder(BST*);
void preorder(BST*);


void main(){
    printf("\n1.create\n2.inorder\n3.preorder\n4.postorder\n5.exit\n");
    int ch,data,n;
    BST *root=NULL;
    while(1){
        printf("Enter the choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("\nEnter the number of nodes\n");
                    scanf("%d",&n);
                    for(int i=0;i<n;i++)
                    {
                        printf("\nEnter the data\n");
                        scanf("%d",&data);
                        root=create(root,data);
                    }
                    break;
            case 2:inorder(root);
                break;
            case 3:preorder(root);
                break;
            case 4:postorder(root);
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
        return root;
    }
    else if(item>root->data){
        root->right=create(root->right,item);
    }
    else if(item<root->data){
        root->left= create(root->left,item);
    }
    else
        printf("Duplicate item not allowed");
    return(root);
}

void inorder(BST* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);

}

void preorder(BST* root) {
    if (root == NULL)
        return;
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);

}

void postorder(BST* root) {
    if (root == NULL)
        return;
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
