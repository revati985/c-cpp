#include<stdio.h>
//TRAVERSING 2D ARRAY
int main(){
     int i=0, j=0;
     int arr[4][3]={{1,2,3},{3,4,5},{5,6,7},{7,8,9}};
     for(i=0; i<4; i++){
          for(j=0; j<3;j++){
               printf("arr[%d][%d]:%d\n",i,j, arr[i][j]);
          }
     }
     return 0;
}