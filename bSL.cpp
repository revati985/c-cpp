#include<iostream>
using namespace std;

int search(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    while(start<=end){
    int mid= start+ (end-start)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    }
    return -1;
}

int main(){
    int arr[100000];
    for(int i=0;i<100000;i++){
        arr[i]=i;
    }
    int result= search(arr,100000,5000);
    cout<<result;
    return 0;
}