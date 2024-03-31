//AVL INSERTION AND ROTATION

#include<stdio.h>         
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
    int h; //height
};
int geth(struct node* n){
    if(n==NULL){
        return 0;
    }
    return n->h;
}
struct node* createnode(int key){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=key;
    n->left=n->right=NULL;
    n->h=1;
    return n;
}
int balancefactor(struct node* n){
    if(n==NULL){
        return 0;
    }
    return geth(n->left)-geth(n->right);
}
int max(int a, int b){
    return (a>b)?a:b;    //if a is more than b return a else return b
}
struct node* rightrotate(struct node* y){
    struct node* x=y->left;
    struct node* t2=x->right;

    x->right=y;
    y->left=t2;

    y->h=max(geth(y->left),geth(y->right))+1;
    x->h=max(geth(x->left),geth(x->right))+1;
    return x;
}
struct node* leftrotate(struct node*x){
    struct node* y=x->right;
    struct node*t2=y->left;

    y->left=x;
    x->right=t2;
    
    y->h=max(geth(y->left),geth(y->right))+1;
    x->h=max(geth(x->left),geth(x->right))+1;

    return y;
}
struct node* insert(struct node* node, int key){
    if(node==NULL){
        return createnode(key);
    }
    if(key<node->data){
        node->left=insert(node->left,key);
    }
    else{
        node->right=insert(node->right,key);
    }
    
    node->h=max(geth(node->left),geth(node->right))+1;
    int bf=balancefactor(node);

    //rotation cases:
    //LL ->one right rotation
    if(bf>1 && key<node->left->data){            //if l>R bf is more than 1
        return rightrotate(node);
    }
    //RR-> one left rotation
    if(bf<-1 && key>node->right->data){
        return leftrotate(node);
    }
    //LR-> left,right
    if(bf>1 && key>node->left->data){
        node->left=leftrotate(node->left);
        return rightrotate(node);
    }
    //RL->right, left
    if(bf<-1 && key<node->right->data){
        node->right=rightrotate(node->right);
        return leftrotate(node);
    }
    return node;

}
struct node* inorder(struct node*root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
int main(){
    struct node* root=NULL;
    root=insert(root,1);
    root=insert(root,2);
    root=insert(root,4);
    root=insert(root,5);
    root=insert(root,3);
    inorder(root);
    return 0;
}
