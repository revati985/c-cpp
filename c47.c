//IMPLEMENTATION OF STACK USING LINKED LIST (isempty,isfull,push,pop)

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
//making top a global variable to avoid using &
struct node*top;

int isempty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(){                //n:newnode          
    struct node*n =(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        return 1;          //allocation of newnode fail
    }
    else{
        return 0;
    }
}//issue in using global variable as local variable too(top:tp)

//push function point the next top node
struct node* push(int x){      
    if(isfull(top)){
        printf("overflow\n");
    }
    else{     
        struct node*n=(struct node*)malloc(sizeof(struct node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
    
}
//issue in using global variable as local variable too
int pop(struct node*tp){
    if(isempty(top)){
        printf("underflow\n");
    }
    else{
        struct node*n=tp;
        top=tp->next;
        int x=n->data;
        free(n);
        return x;
    }
}
void llt(struct node*ptr){     //list traversal
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    top=push(98);      //goes on top of stack
    top=push(101);
    top=push(109);
    llt(top);
    int x=pop(top);      //top element popped
    printf("popped element %d\n",x);
    llt(top);
    return 0;
}