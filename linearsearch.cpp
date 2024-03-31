#include<iostream>

int search(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,20,40,50,30,60};
    int n= sizeof(arr)/sizeof(arr[0]);
    int result=search(arr,6,30);
    if(result==-1){
        std::cout<<"no element found";
    }else{
        std::cout<<"element index:"<<result;
    }
    return 0;
}