#include<iostream>
using namespace std;

int main(){
     int n,digit,sume=0,sumo=0;
     cout<<"enter integer: ";
     cin>>n;
     while(0<=n<=10^8){
          digit=n%10;
     if(digit%2==0){
          sume=sume+digit;
     }else{
          sumo=sumo+digit;
     }
     n=n/10;
     }
     cout<<sume;
     cout<<" "<<sumo;
     return 0;
}


