//BINARY SEARCH
#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
     int start=0;
     int end=size-1;
     int mid= start+ (end-start)/2;
     while( start<=end){                           //binary search
          if(arr[mid]==key){
               return mid;
          }
          else if(arr[mid]>key){
               end=mid-1;
          }
          else{
               start=mid+1;
          }
          mid= start+ (end-start)/2;
     }
     return -1;
}
int main(){
     int arr[6]={2,4,6,8,10,32};
     int ans = binarysearch(arr,6,10);
     cout<<"index of key is "<<ans;
     return 0;
}