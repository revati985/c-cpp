#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left, *right; 
};
struct node*createnode(int key){
    struct node*n= (struct node*)malloc(sizeof(struct node));
    n->data=key;
    n->left=n->right=NULL;
    return n;
}
void inorder(struct node*root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);

    }
}
struct node*insert(struct node*root,int k){
    if(root==NULL){
        return createnode(k);
    }
    if(k<root->data){
        root->left=insert(root->left,k);
    }
    else{
        root->right=insert(root->right,k);
    }
    return root;
}
struct node* inorderpredecessor(struct node*root){
    root=root->left;                                        //left node ka rightmost node
    while(root->right!=NULL){
        root=root->right;
    }
}
struct node*deletenode(struct node*root, int value){
    struct node* ipre;
    if(root==NULL){                                  //BASE CASE
        return NULL;
    }
    if(root->left=root->right=NULL){
        free(root);
    }
    //SEARCH FOR NODE, KEEP REDUCING THE SIZE OF TREE: with one child
    if(value<root->data){
        deletenode(root->left,value);
    }
    else if(value>root->data){
        deletenode(root->right,value);
    }
    //NODE TO BE DELETED IS ROOT OR A PARENT: with two children
    else{
        //INORDER PREDECESSOR
        ipre= inorderpredecessor(root);
        root->data=ipre->data;
        deletenode(root->left,ipre->data);
    }
    return root;
}
int main(){
    struct node*p=createnode(5);
    struct node*p1=createnode(3);
    struct node*p2=createnode(6);
    struct node*p3=createnode(1);
    struct node*p4=createnode(4);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    inorder(p);
    deletenode(p,5);
    printf("\n");
    printf("|data is %d|",p->data);
    inorder(p);
    return 0;
}
