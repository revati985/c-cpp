#include<stdio.h>

//INPUT ELEMENTS AND PRINTING 2D ARRAY

int main(){
     int arr[3][4],i,j;          // i----> row, j----> coloumn
     printf("enter 2D array:\n");
     for(i=0;i<3;i++){
          for(j=0;j<4;j++){
               printf("element arr[%d][%d]: ",i,j);
               scanf("%d",&arr[i][j]);
          }
     }
     for(i=0;i<3;i++){
          for(j=0;j<4;j++){
               printf("%d\t",arr[i][j]);
          }
          printf("\n");
     }
     return 0;
}