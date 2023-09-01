// arr[]={100,99,98}  ----> (100) 1st element: (arr+0)
//                    ----> (99) 2nd element: (arr+1)
//                    ----> (98) 3rd element: (arr+2)

#include<stdio.h>

int main(){
     int arr[]={87,65,45,90};
     printf("%d \n", *(arr+0));
     printf("%d \n", *(arr+2));
     printf("%d \n", *(arr+4));    //error
     return 0;
}


// REVERSE AN ARRAY  (n-i-1):

void revarr(int arr[], int n);
void printarr(int arr[], int n);
int main(){
     int arr[]={1,2,3,4,5};
     revarr(arr,5);
     printarr(arr,5);
     return 0;
}
void printarr(int arr[], int n){
     for(int i=0; i<n; i++){
          printf("%d \t", arr[i]);    
          // (\t): gives tab space in between
     }
}
void revarr(int arr[], int n){
     for(int i=0; i<n/2; i++){
          int firstval= arr[i];
          int secondval= arr[n-i-1];   // **
          arr[i]= secondval;
          arr[n-i-1]= firstval;
     }

}