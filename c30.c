#include<stdio.h>

// SUM OF N NUMERS [USING RECURSION]

     // int sum(int n);
     // int main(){
     //      int n;
     //      printf("enter n: ");
     //      scanf("%d", &n);
     //      printf("%d", sum(n));
     //      return 0;
     // }
     // int sum(int n){
     //      if(n==1){
     //           return 1;
     //      }
     //      int sumnm1= sum(n-1);
     //      int Sum= sumnm1+n;
     //      return Sum;
     // }

// FACTORIAL OF NUMBER

// int fact(int n);
// int main(){
//      int n;
//      printf("enter number" );
//      scanf("%d", &n);
//      printf("factorial of number %d is %d",n, fact(n));
//      return 0;
// }
// int fact(int n){
//      if(n==1){
//           return 1;
//      }
//      int factnm1= fact(n-1);
//      int Fact= factnm1*n;
//      return Fact;
// }

// FIBONACCI SERIES (0,1,1,2,3,5,8,13..)

#include<stdio.h>

int fib(int n);
int main(){
     int n;
     printf("enter n: ");
     scanf("%d", &n);
     printf("fibonacci series is %d", fib(n));
     return 0;
}
int fib(int n){
     if(n==0){
          return 0;
     }
     if(n==1){
          return 1;
     }
     int fibnm1= fib(n-1);
     int fibnm2= fib(n-2);
     int Fib= fibnm1+ fibnm2;
     return Fib;
}