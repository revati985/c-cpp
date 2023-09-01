#include<iostream>
using namespace std;

void selectionsort(int arr[], int n){        // slection sort
     for(int i=0; i<n-1; i++){              //rounds: 0,1,2,3....
     int min=arr[i], minindex=i;
     for(int j=i+1; j<n; j++){
          if(arr[j]<min){
          min=arr[j];
          minindex=j;
          }
     }
          int temp= arr[i];            //swap
          arr[i]=arr[minindex];
          arr[minindex]=temp;
      
     }
}
int main(){
     int arr[]={6,2,8,5,9,10};
     selectionsort(arr,6);
     for(int i=0; i<6;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}


