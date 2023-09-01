#include <stdio.h>

// BREAK STATEMENT (exit loop)

// Q1. input no.s by user and print only even ones

int main()
{
     int n;                                 // while loop
     while (1)
     {
          printf("enter your number: ");
          scanf("%d", &n);
          if (n % 2 != 0)
          {
               printf("odd no.\n");
               break;
          }
          printf("%d \n", n);
     }
     printf("end");
     return 0;
}


//      do
//      {                                    //do-while loop
//           printf("enter number: ");
//           scanf("%d", &n);

//           if (n % 2 != 0){
//           printf("odd number");
//                break;
//           }
//           printf("%d \n", n);
//      } while (1);

//      return 0;
// }

//Q2. input any number and do not print multiple f 7

int main(){
     int n;
     while(1){
          printf("enter your number: ");
          scanf("%d",&n);
          if(n%7==0){
               printf("multiple of 7");
               break;
          }
          printf("%d \n",n);
          }
          return 0;
     
}