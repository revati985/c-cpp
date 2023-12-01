//Using MALLOC
#include<stdio.h>
#include<stdlib.h>

int main(){
     int i,n;
     printf("enter n ");                         // ptr stores address of first memory
     scanf("%d",&n);
     int *ptr= (int*) malloc(n*sizeof(int));     //memory allocation with type casting int
     if(ptr==NULL){                              //int store 4 bytes each
          printf("no memory ");
     }
     for(i=0;i<n;i++){                                  
          printf("enter element ");
          scanf("%d",ptr+i);                    //ex. 10 14 18 22 (address ptr)
     }
     for(i=0;i<n,i++){
          printf("%d",*(ptr+i));                //value at address
     }
     return 0;
}