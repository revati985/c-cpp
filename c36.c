#include<stdio.h>

//TRANSPOSE OF A MATRIX

int main(){
     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     int trans[3][3],i,j;
     
     printf("matrix 'a':\n");
     for(i=0;i<3;i++){
          for(j=0;j<3;j++){
               printf("%d\t",a[i][j]);
          }
          printf("\n");
     } 
     for(i=0;i<3;i++){
          for(j=0;j<3;j++){
               trans[i][j]=a[j][i];
          }
     }
     printf("transpose of matrix 'a' is:\n");
     for(i=0;i<3;i++){
          for(j=0;j<3;j++){
               printf("%d\t",trans[i][j]);
          }
          printf("\n");
     }
     return 0;
}