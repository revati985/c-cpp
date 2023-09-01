#include<stdio.h>

//checking if a no. is prime or not

int main(){
     int n,i,isprime=1;
     printf("enter any number: ");
     scanf("%d",&n);
     for(i=2; i*i<=n; i++){
          if(n%i==0){
          isprime=0;
          }
     }
     if(isprime){
          printf("number %d is prime", n);
     }
     else{
          printf("number %d is not prime", n);
     }
     return 0;
}


