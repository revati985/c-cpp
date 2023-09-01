#include<stdio.h>

void swap(int *a, int *b);
int main(){
     int x=3, y=5;
     //call by refrence
     swap(&x,&y);
     printf("x= %d & y= %d  \n", x , y);
     return 0;
}
// call by reference
void swap(int *a, int *b){
     int t= *a;         // a ki value t mai store
     *a= *b;            // b ki value a mai store
     *b= t;             // t ki value b mai store 
}