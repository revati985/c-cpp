//MERGE SORT
#include<stdio.h>
#include<limits.h>   //sets limit to max i.e. to infinity

void merge(int A[],int a, int c, int b){   //a=1:starting element, b:last, c:mid
    int n1=c-a+1;
    int n2=b-c;
    int L[n1+1];               //left part
    int R[n2+1];               //right part
    for(int i=0;i<n1;i++){
        L[i]=A[a+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=A[c+j+1];
    }
    L[n1]=INT_MAX;           //length of L and R=infinty so that the comparision don't stop
    R[n2]=INT_MAX;

    int i=0, j=0;
    
    for(int k=a;k<=b;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
    }
}

void mergesort(int A[],int a,int b){
    if(a<b){
        int c = (a+b)/2;
        mergesort(A,a,c);
        mergesort(A,c+1,b);
        merge(A,a,c,b);
    }
}
int main(){
    int arr[]={12,11,13,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);   
//gives numer of elements: total size of array divided by the space/size occupied by one element
    mergesort(arr,0,n-1);
    printf("sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}