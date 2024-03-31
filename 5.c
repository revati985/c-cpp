//ENQUEUE DEQUEUE
#include<stdio.h>
#include<stdlib.h>

void enqueue(struct queue*q,int data){
    if(isfull(q)){
        printf("overflow\n");
    }
    else{
        struct node*n=createnode(data);
        if(isempty(q)){
            q->f=q->r=n;
        }
        else{
            q->r->next=n;
            q->r=n;
        }
        q->size++;
    }
}
int dequeue(struct queue*q){
    if(!isempty(q)){
        struct node*ptr=q->f;
        q->f=q->f->next;
        int val=ptr->data;
        free(ptr);
        q->size--;
        return val;
    }
    else{
        printf("underflow\n");
        return -1;
}}