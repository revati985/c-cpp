#include<stdio.h>
// Q1

int main(){
     int marks[2][3];       // DOUBLE ARRAY 
     //--> 2 array, size 3
     marks[0][0]=98;            // 1st kid- 1st sub marks
     marks[0][1]=87;            // 1st kid- 2nd sub marks
     marks[0][2]=48;

     
     marks[1][0]=58;            // 2nd kid- 1st sub marks
     marks[1][1]=56;
     marks[1][2]=94;

     printf("%d", marks[0][2]);
     return 0;

}

// Q2: print no. of odd num

int countnum(int arr[], int n);      
// int n --> size of array
int main(){
     int arr[]={1,2,3,4,5,6};
     printf("%d", countnum(arr,6));
     return 0;
}
int countnum(int arr[], int n){        
// (int) return value, (void) doesn't return anything
     int count=0;
     for( int i=0; i<n; i++){
          if(arr[i]%2 !=0){     // arr[i] : element 
               count++;
          }
    }
     return count;

}

