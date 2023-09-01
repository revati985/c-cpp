#include<stdio.h>

void swap(int *a,int *b){
     int temp;
     temp= *a;
     *a=*b;
     *b= temp;
}
int main(){
     int x=8,y=9;
     swap(&x,&y);
     printf("x=%d,y=%d",x,y);
     return 0;
}