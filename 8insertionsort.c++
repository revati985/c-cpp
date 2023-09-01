#include<iostream>
using namespace std;

void insertionsort(int arr[], int n){
     for(int i=1;i<n;i++){                  // i=current (element compared to j=i-1 to 0)
          int current=arr[i];
          int j;
          for(j=i-1; j>=0; j--){             // j goes to  left till 0th index
               if(current<arr[j]){
                    arr[j+1]=arr[j];          // left array is shifted to right by one 
               }
               else{
                    break;
               }
          }
     arr[j+1]=current;
     }
}

void printarr(int arr[], int n){
     for(int i=0; i<n; i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){
     int arr[100];
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     insertionsort(arr,n);
     printarr(arr,n);
     return 0;
}