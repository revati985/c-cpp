#include<stdio.h>

CONTINUE STATEMENT (skip)

int main(){
     for(int i=0; i<11; i++){
          if(i==6){
               continue;
          }
          printf("%d \n",i);
     } return 0;
}

//Q1. print factorial of n numbers

//I
int main(){                                                 // for( intialisation; condition;updation)
     int n;                           // sum=0 ; [sum=sum+i]                     
     int fact=1;                      // fact=1 ; [fact=fact*i]
     printf("enter n: ");
     scanf("%d",&n);
     for(int i=1; i<=n; i++){
          printf("%d \n", fact=fact*i) ;    // fact *=i 
     } 
     return 0;
}
//II
int main(){
     int n;
     int fact=1;
     printf("enter n: ");
     scanf("%d",&n);
     for( int i=1; i<=n ; i++){
          fact*=i ;
     }printf("factorial is: %d", fact);
     return 0;
}

//Q2. sum between 5-50

int main(){
     int sum=0;
     for(int i=5; i<=50; i++){
          sum=sum+i ;                   // sum += i 
     } printf("sum is: %d", sum);
     return 0;
}
