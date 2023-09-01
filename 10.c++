#include<iostream>                 //Program for array left rotation by d positions(index)
using namespace std;

void rotate(int arr[], int d, int n){
     int temp[n];                       //new array
     int k=0;                           // index of new arr temp
     for(int i=d;i<n;i++){
          temp[k]=arr[i];
          k++;
     }
     for(int i=0;i<d;i++){
          temp[k]=arr[i];
          k++;
     }
     for(int i=0;i<n;i++){
          arr[i]=temp[i];               //copying new arr to original arr
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
     int d;
     cin>>d;
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     rotate(arr,d,n);
     printarr(arr,n);
     return 0;
}