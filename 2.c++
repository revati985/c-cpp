#include<iostream>
using namespace std;
#include<cmath>

int main(){
     int x,n,a;
     cin>>x;
     cin>>n;
     if(x==0 && n==0){
          a=1;}
          if(0<=x<=8 && 0<=n<=9){
          a=pow(x,n);
          cout<<a;
          }
     else{
          cout<<"wrong input";
          }
return 0;
}