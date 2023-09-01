#include<stdio.h>

//input 5 elements in array and display elements of array.

int main(){
     int i;
     int arr[5];
     printf("enter elements:\n",i);
     for(i=0;i<5;i++){
          scanf("%d",&arr[i]);
     }
     for(i=0;i<5;i++){
          printf("%d\t",arr[i]);
     }
     return 0;

}

//REVERSE OF ARRAY

int main(){
     int i;
     int arr[5];
     printf("enter elements :\n");
     for(i=0;i<5;i++){
          scanf("%d",&arr[i]);
     }
     printf("reveresed array is: ");
     for(i=4;i>=0;i--){
          printf("%d\t", arr[i]);
     }
     return 0;
}

//MAX ELEMENT OF ARRAY

int main(){
     int i, arr[100],n;
     printf("enter no. of elements: ");
     scanf("%d",&n);
     for(i=0;i<n;i++){
          scanf("%d",&arr[i]);
     }
     int max=arr[0];
     for(i=0;i<n;i++){
          if(arr[i]>max){
               max=arr[i];
          }
     }
     printf("max element of array is: %d", max);
     return 0;
}