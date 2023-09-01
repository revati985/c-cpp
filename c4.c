#include <stdio.h>

int main()
{
     int a;
     printf("enter any number ");
     scanf("%d", &a);
     if (a >= 0){
          printf("number is positive ");
          if (a % 2 == 0){
               printf("even number ");
          }
               else{printf("odd number");}

     } else{printf("negative number");}
     return 0;
}


int main()                  // if(condition)---> else if(condition)---> else
{
     int marks;
     printf("enter your marks ");
     scanf("%d", &marks);
     if(marks>0 && marks<=30){
          printf("FAIL");
     }
     else if(marks>30 && marks<=100){
          printf("PASS ");    
          if(marks>30 && marks<=55){
          printf("grade: C");}    
          else if(marks>55 && marks<=75){
          printf("grade: B");}    
          else if(marks>75 && marks<=88){
          printf("grade: A");}   
          else{printf("grade: A+");}
     }
     else {printf("wrong input");}

     // marks<=30? printf("FAIL"):printf("PASS");   //TERNARY OPERATOR
     return 0;
}