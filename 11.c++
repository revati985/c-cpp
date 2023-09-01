#include<iostream>
using namespace std;

// void secondlargest(int arr[], int n){
//      int max=arr[0];
//      for(int i=0;i<n;i++){
//           if(arr[i]>max){
//                max=arr[i];
//           }
//      }
//      int secondlarge=arr[0];
//      int y;
//      for(int i=0;i<n;i++){
//           if(arr[i]<arr[y] && arr[y]!=max){
//                int secondlarge=arr[y];
//           }
          
//      }
//      cout<<secondlarge<<endl;
     
     
// }
// int main(){
//      int arr[100];
//      int n;
//      cin>>n;
//      for(int i=0;i<n;i++){
//           cin>>arr[i];
//      }
//      secondlargest(arr,n);
// }

void sort(int arr[], int n){
     for(int i=0;i<n-1;i++){           //rounds
          int min=arr[i], minindex=i;
          for(int j=i+1;j<n;j++){        
               if(arr[j]<min){
                    min=arr[j];
                    minindex=j;
               }
               int temp=arr[i];       //swap of arr[i] and arr[minindex]
               arr[i]=arr[minindex];
               arr[minindex]=temp;
          }
     }
     cout<<arr[n-2];                  //printing last second element: second largest 
}
int main(){
     int n, arr[100];
     cin>>n;
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     sort(arr,n);

}