#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int k ){
     int s=0, e=n-1, mid= s+(e-s)/2;            //first, last, total occurence of a key
     int ans1=-1;                               // storing value
     while(s<=e){
          if(arr[mid]==k){
               ans1=mid;
               e=mid-1;
          }
          else if(k>arr[mid]){
               s=mid+1;
          }
          else{
               e=mid-1;
          }
          mid=s+(e-s)/2;

     }
     return ans1;
}

int lastocc(int arr[], int n, int k ){
     int s=0, e=n-1, mid= s+(e-s)/2;
     int ans2=-1;
     while(s<=e){
          if(arr[mid]==k){
               ans2=mid;
               s=mid+1;
          }
          else if(k>arr[mid]){
               s=mid+1;
          }
          else{
               e=mid-1;
          }
          mid=s+(e-s)/2;

     }
     return ans2;
}
int totalocc(int arr[], int n, int k){
     int ans= (lastocc(arr,6,6)-firstocc(arr,6,6))+1;
     return ans;
}

int main(){
     int arr[6]={2,4,6,6,6,8};
     cout<<"first occ of k is: "<<firstocc(arr,6,6)<<endl;
     cout<<"last occ of k is: "<<lastocc(arr,6,6)<<endl;
     cout<<"total occ of k is: "<<totalocc(arr,6,6)<<endl;
}
