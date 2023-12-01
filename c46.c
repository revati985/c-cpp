//CREATION AND TRANSVERSAL OF LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct node{                                    //def pointer
     int data;
     struct node*next;                          
};

void linkedlisttraversal(struct node*ptr){
     while(ptr!=NULL){
          printf("elements: %d",ptr->data);
          ptr=ptr->next;
     }
}
int main(){
     struct node* head;                                     //allocating memory in heap
     struct node* second;
     struct node* third;
     head=(struct node*)malloc(sizeof(struct node));        
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));

     head->data=7;                                          //connecting nodes
     head->next=second;

     second->data=77;
     second->next=third; 

     third->data=34;
     third->next=NULL;
     linkedlisttraversal(head);
     return 0;
}
