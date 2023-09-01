#include<stdio.h>

//MULTIPLICATION OF TWO MATRICES

void input(int array[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            scanf("%d",&array[i][j]);
        }
    } 
}

int output(int array[3][3]){
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            printf("%d \t",array[i][j]);
        }
        printf("\n");
    }
}

int mult(int a[3][3], int b[3][3],int result[3][3]){
    for(int i=0; i<3; i++){ 
        for(int j=0; j<3; j++){
            result[i][j]=0;
            for(int k=0; k<3; k++){  
                result[i][j]+= a[i][k]* b[k][j];
            }
        }
    }

}

int routput(int result[3][3]){
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            printf("%d \t",result[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[3][3], b[3][3], result[3][3];
    printf("enter elements of 1st matrix:");
    input(a); //no need to write dimensions in calling
    output(a);

    printf("enter elements of 2nd matrix:");
    input(b);
    output(b);

    printf("product of two entered matrixes is\n:");
    mult(a,b,result);
    routput(result);
    return 0;
}