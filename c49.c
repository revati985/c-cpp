//TRAVERSAL IN BINARY TREE(PRE,POST,INORDER) //INSERT IN BST

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};
//creating a node pointer and allocating a memory in heap
struct node* createnode(int data){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=data;    //setting data
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node*root){      //root->lchild->rchild
    if(root!=NULL){
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node*root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
}
void inorder(struct node*root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
//INSERT IN BST
void insert(struct node*root,int key){
    struct node*prev=NULL;
    while(root!=NULL){
        prev=root;
        if(key==root->data){
            printf("no insertion"); 
            return;                    //already in bst
        }
        else if(key>root->data){
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    struct node*new=createnode(key);
    if(key<prev->data){
        prev->left=key;
    }
    else{
        prev->right=key;
    }
}
int main(){
    struct node*p=createnode(1);
    struct node*p1=createnode(22);
    struct node*p2=createnode(3);
    struct node*p3=createnode(67);
    struct node*p4=createnode(90);
    //linking node with it's right and left children
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    preorder(p);postorder(p);
    inorder(p);
    insert(p,7);
    printf("%d",p->right->right->data);
    return 0;
}