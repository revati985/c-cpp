#include<stdio.h>
// ARRAY
void main(){
     int a[50],n,i;
     printf("enter size of array: ");
     scanf("%d",&n);
     for(i=0; i<n; i++){
          scanf("%d",&a[i]);
     }
     printf("entered array is: ");
     for(i=0; i<n; i++){
          printf("%d \t",a[i]);
     }

}

//REVERSE OF ARRAY
void main(){
     int a[50],n,i;
     printf("enter size of array: ");
     scanf("%d", &n);
     for(i=0; i<n; i++){
          scanf("%d", &a[i]);
     }
     printf("reverese of entered array is: ");
     for(i=n-1; i>=0; i--){
          printf("%d\t", a[i]);
     }
}

// MAX ELEMENT OUT OF ARRAY
void main(){
     int a[50],n,i;
     printf("enter n: ");
     scanf("%d", &n);
     for(i=0;i<n;i++){
          scanf("%d", &a[i]);
     }
     int max= a[0];
     for(i=0; i<n; i++){
          if(a[i]>a[0]){
               max=a[i];
          }
     } printf("max element is :%d", max);

}