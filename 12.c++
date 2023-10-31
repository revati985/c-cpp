#include<iostream>
using namespace std;

   //DNF (dutch national flag) problem

void sort(int arr[], int n){
     int mid=0;
     int low=0;
     int high=n-1;
     while(mid<=high){
          if(arr[mid]==0){
               swap(arr[low],arr[mid]);
               low++;
               mid++;
          }
          else if(arr[mid]==1){
               mid++;
          }
          else{
               swap(arr[high],arr[mid]);
               high--;
          }
}
}
int main(){
     int arr[]={0,1,2,0,2,1};
     sort(arr,6);
     for(int i=0;i<6;i++){
          cout<<arr[i]<<" ";
     }
     return 0;
}
