#include<iostream>
using namespace std;

void printarr(int arr[], int n){               //buble sort
     for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
     }
     cout<<endl;
}

void bubblesort(int arr[], int n){
     for(int i=0; i<n-1; i++){                 //rounds=0,1,2...
          for(int j=0; j<n-1-i; j++){          //elements of arr
               if(arr[j]>arr[j+1]){
                    int temp=arr[j];            //swap
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
               }
            
          }
     }
}
int main(){
     int arr[100];
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
bubblesort(arr,6);
printarr(arr,6);
}
