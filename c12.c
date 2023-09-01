#include<stdio.h>

//RECURSION                      ----> sum

int sum(int n);
int main(){
     printf("sum is: %d", sum(5));
     return 0;
} int sum(int n){
     if(n==1){                  // BASE CASE: here recursion stops
        return 1;
     }
     int sumn= sum(n-1);
     int sumN= sumn +n ;
     return sumN;
}

//RECURSION                     ----> factorial
int fact(int n);
int main(){
     printf("factorial is: %d", fact(5));
     return 0;
}  int fact(int n){
     if(n==1){                  // BASE CASE: here recursion stops
          return 1;
     }
     int factn= fact(n-1);
     int factN= factn*n ;
     return factN;
}                  