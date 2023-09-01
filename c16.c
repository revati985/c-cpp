#include<stdio.h>
// ARRAY
// int main(){
//      int marks[3];                    // [] ---> stores size of array
//      printf("enter three marks: ");
//      scanf("%d", &marks[0]);         // & --->  used to input
//      scanf("%d", &marks[1]);
//      scanf("%d", &marks[2]);
//      printf("the marks are: %d & %d & %d", marks[0], marks[1], marks[2]);
//      return 0;
//}
// char: occupy 1 byte, char array[4]--> memory reserved.. 40 bytes
// int: occupy 4 byte, int array[4]--> memory reserved.. 16 bytes

// int main(){
//      int age=22;
//      int *ptr=&age;
//      printf("ptr= %u \n", ptr);
//      ptr++;           // ptr= ptr+1 (+1 is addition of size of one int/ float--> [4 bytes] to address)
//      printf("ptr= %u \n", ptr);           // char ( 1 byte )
//      ptr--;
//      printf("ptr= %u \n", ptr);  // ptr= ptr-1 (-4 bytes in adrdress of ptr)

//      return 0;

// }
void printnum(int arr[], int n);
int main(){
     int arr[]= {1,2,3,4,5,6};
     printnum(arr,6);
     return 0;
}
void printnum(int arr[], int n){
     for(int i=0; i<n; i++){
     printf("%d \n", arr[i]);}
}