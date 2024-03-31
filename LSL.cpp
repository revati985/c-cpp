#include<iostream>
#include <cstdlib>
using namespace std;

//LINNEAR SEARCH

int search(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[100000];
    int n=100000;
    for(int i=0;i<100000;i++){
        arr[i]=rand()% 100000;
    }
    int result= search(arr,100000,1000);
    cout<<result;
    return 0;
}