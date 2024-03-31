#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* next;
    int data;
};
struct node* createnode(int data){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->next=NULL;
    return n;
}
struct queue{
    struct node* f;           //front of queue
    struct node* r;           //rear of queue- end
    int maxsize;
    int size;
};
int isfull(){
    struct node*n = (struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        free(n);
        return 1;
    }
    else{
        free(n);
        return 0;
    }
}
int isempty(struct queue*q){
    if(q->f==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
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
struct graph{
    int vertices;
    struct node** adjlist;           //pointer to pointer in graph
    int* visited;                    //array
};
struct node{
    int vertex;
    struct node* next;               //adjacency list structure
};
