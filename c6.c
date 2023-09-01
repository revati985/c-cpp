#include<stdio.h>

int main(){                     //while loop
     int n;
     printf("enter number :");
     scanf("%d",&a);
     int i=0;
     while(i<(n+1)){
          printf("%d \n",i);
          i++;
     }return 0;
}

// int main(){
//      int i=20;
//      while(i>=0){
//           printf("%d \n", i);
//           i--;
//      }return 0;
// }

int main(){
     int i=0;                      // do-while loop
     do{
          printf("%d \n",i);
          i++;
     } while(i<6);
     return 0;
}