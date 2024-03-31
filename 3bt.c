//TRAVERSAL IN BINARY TREE
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;                      //memory allocation
};

void inordertraversal(struct node*root){
    if(root==NULL){
        return;
    }
    inordertraversal(root->left);
    printf("%d->",root->data);
    inordertraversal(root->right);
}
void preordertraversal(struct node*root){
    if(root==NULL){
        return;
    }
    printf("%d->",root->data);
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(struct node*root){
    if(root==NULL){
        return;
    }
    postordertraversal(root->left);
    printf("%d->",root->data);
    postordertraversal(root->right);
}
struct node* createnewnode(int value){
    struct node* n= (struct node*)malloc(sizeof(struct node));
    n->data=value;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct node* insertleft(struct node* root, int value){
    root->left=createnewnode(value);
    return root->left;
}
struct node* insertright(struct node*root, int value){
    root->right=createnewnode(value);
    return root->right;
}
int main(){
    struct node*root=createnewnode(1);
    insertleft(root,2);
    insertright(root,3);
    insertleft(root->left,4);
    printf("inorder\n");
    inordertraversal(root);
    printf("\npostorder\n");
    postordertraversal(root);
    printf("\npreorder\n");
    preordertraversal(root);
    return 0;
}