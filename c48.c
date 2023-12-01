//INSERTION IN STACK USING LL

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
void llt(struct node*ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
//insert at start
struct node*insert(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    //allocating memory to new ptr node
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
//insert in between
struct node*insertbtw(struct node*head,int data,int index){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;
    while(i<index-1){
        p=p->next;
        i++;                      //till index is found
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
//insert at end of stack
struct node* insertend(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    while(p->next!=NULL){           //p shifted to each node in sequence till end
        p=p->next;                  
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=88;
    second->next=third;
    third->data=56;
    third->next=NULL;
    printf("\noriginal stack\n");
    llt(head);
    printf("\nnew stack\n");
    head=insert(head,98);
    head=insertbtw(head,100,2);
    head=insertend(head,71);
    llt(head);
    return 0;
}