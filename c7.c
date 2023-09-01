#include<stdio.h>

int main(){                        //Q1: sum of first n natural numbers
     int n;
     int sum=0;
     printf("enter n :");
     scanf("%d", &n);
     for(int i=1; i<=n; i++){
          sum=sum+i ;              //sum += i
     } printf("sum is: %d \n",sum);

     for(int i=n; i>=1; i--){      // print in reverse
          printf("%d \n",i);
     }
     return 0;
}

int main(){                        //Q2: table of n
     int n;
     printf("enter number: ");
     scanf("%d", &n);
     for(int i=1; i<11; i++){
          printf("%d \n",n*i);
     } return 0;
}