#include<stdio.h>

//REVERSE A NUMBER

int main(){
     int n, reverse=0, remainder;
     printf("enter a number: ");
     scanf("%d", &n);
     while(n!=0){
          remainder= n%10;
          reverse= reverse*10 + remainder;
          n=n/10;
     }
     printf("reverse is %d", reverse);
     
     return 0;
}
