//SPARSE MATRIX REPRESENTAION

#include<stdio.h>

int main(){
     int a[3][3],i,j,z=0,nz=0;
     for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
               printf("enter element: ");
               scanf("%d", &a[i][j]);
          }
     }
     for(int i=0;i<3;i++){
          printf("\n");
          for(int j=0;j<3;j++){
               printf("%d\t", a[i][j]);
          }
     }
     for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
               if(a[i][j]==0){
                    z++;
               }
               else{
                    nz++;
               }
          }
     }
     if(nz>z){
          printf("\n not a sparse matrix");
          }
          else{
               int s[nz][3],k=0;                     ////k: sparse matrix row
               for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                         if(a[i][j]!=0){
                              s[k][0]=i;
                              s[k][1]=j;
                              s[k][2]=a[i][j];
                              k++;
                    }

                    }
               }                  
               
          
          printf("\n sparse matrix representation: ");
          for(int i=0;i<nz;i++){
               printf("\n");
               for(int j=0;j<3;j++){
                    printf("%d\t",s[i][j]);
                    }
               }
               
                    
               return 0;
          }
}
