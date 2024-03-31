//BINARY SEARCH TREE(BST),CREATE NEW NODE, INSERT NEW NODE

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node*createnode(int value){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=value;
    n->left=NULL;
    n->right=NULL;
}

struct node* insert(struct node* root,int value){
    if(root==NULL){
        return createnode(value);
    }
    if(value<root->data){
        root->left=insert(root->left,value);
    }
    else if(value>root->data){
        root->right=insert(root->right,value);
    }
    return root;
}

struct node* search(struct node* root,int key){
    if(root==NULL||root->data==key){
        return root;
    }
    if(key>root->data){
        return search(root->right,key);
    }
    else{
        return search(root->left,key);
    }
}

int main(){
    struct node* root= NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);

    int key=6;                               //BST
    if(search(root,key)==NULL){
        printf("no key found\n");
    }
    else{
        printf("key found %d\n",key);
    }
    key=60;
    if(search(root,key)==NULL){
        printf("no key found\n");
    }
    else{
        printf("key found %d\n",key);
    }
    return 0;
}
