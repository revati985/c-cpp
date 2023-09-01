#include<stdio.h>

//SUM OF TWO MATRICES

int main(){
    int i,j;
    int a[3][3], b[3][3],sum[3][3];

    printf("enter elements of 'a' matrix: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("a[%d][%d]= ",i,j);            
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter elements of 'b' matrix");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){ 
            printf("b[%d][%d]= ",i,j);           
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){            
            sum[i][j]=a[i][j]+ b[i][j];
        }
    }

    printf("sum of matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
     return 0;
}

//OR [PRE DETERMINED MATRICES]

int main(){
     int a[3][3]={{11,2,3},{3,4,5},{5,6,7}};
     int b[3][3]={{12,23,34},{34,45,56},{56,67,78}};
     int sum[3][3],i,j;
     for(i=0; i<3; i++){
        for(j=0; j<3; j++){            
            sum[i][j]=a[i][j]+ b[i][j];
        }
    }

    printf("sum of matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
     return 0;
}