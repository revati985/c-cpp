#include<stdio.h>

int sum(int n);             // RECURSION: func calls itself   (SUM)
int main(){
     printf("%d", sum(6));
     return 0;}
int sum(int n){
     if(n==1){
        return 1;}
     int nums1= sum(n-1);
     int sum= nums1+n;
     return sum;
}

int fact(int n);                 // RECURSION: func calls itself  (FACTORIAL)
int main(){
     int i;
     printf("%d", fact(4));
     return 0;
}
int fact(int n){
     if(n==0){                 //-----> fact(0)=1
          return 1;}
     int factnm1= fact(n-1);
     int fact= factnm1*n;
     return fact;
}


// FABONACCI SERIES   (0,1,1,2,3,5,8,13...) 

int fib(int n);                           // RECURSION---> fib(0)=0, fib(1)=1
int main(){
     printf("%d", fib(3));
     return 0;
}
int fib(int n){
     if(n==0){
          return 0;}
     if(n==1){
          return 1;}
     int fibnm1= fib(n-1);
     int fibnm2= fib(n-2);
     int fib= fibnm1+ fibnm2;
     return fib;
}