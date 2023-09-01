#include<iostream>
using namespace std;

void movezeros(int arr[],int n){            //moving zeros of array to end
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){                 // elements on ith position copied to jth position
            arr[j]=arr[i];             //right to left
            j++;
        }
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
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
    movezeros(arr,n);
    printarr(arr,n);
    return 0;

}