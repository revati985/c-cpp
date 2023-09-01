#include<stdio.h>

// Q1. RIGHT TRIANGLE OF ASTRICK     (TYPE-1)

     int main(){
     int i,j,row;                     // (i)--> row no. , (j)--> column no.
     printf("enter no. of rows: ");
     scanf("%d", &row);               
     for( i=1; i<=row; i++ ){         // (i)row no. = no. of stars 
          for( j=1; j<=i; j++){       // j=i
               printf("*");
          }
          printf("\n");
     }
     return 0;


// }

//Q2. A RIGHT TRIANGLE OF NUMBERS    (TYPE-2)

int main(){
     int i,j,rows;
     printf("enter no. of rows: ");
     scanf("%d", &rows);
     for(i=1; i<=rows; i++){
          for(j=1; j<=i; j++){
               printf("%d",j);
          }
     printf("\n");
     }
     return 0;

}

//Q3. RIGHT TRAINGLE                 (TYPE-3)

int main(){
     int i,j,rows;
     printf("enter no. of rows: ");
     scanf("%d", &rows);
     for(i=1; i<=rows; i++){
          for(j=1; j<=i; j++){
               printf("%d", i);
          }
     printf("\n");
     }
     return 0;

}

//Q4. RIGHT TRIANGLE                 (TYPE-4)
int main(){
     int i,j,rows,k=1;
     printf("enter no. of rows: ");
     scanf("%d", &rows);
     for(i=1; i<=rows; i++){
          for(j=1; j<=i; j++){
               printf("%d", k++);
          }
     printf("\n");
     }
     return 0;

}