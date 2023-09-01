#include<stdio.h>

void table(int n);
int main(){
     int n;
     printf("enter n: ");
     scanf("%d", &n);
     table(n);              //n: argument/ actual parameter
     return 0;
} void table(int x){        //x: parameter/ formal parameter
     for(int i=1; i<=10; i++){
         printf("%d \n", x*i);}
    
}

void sum( int a, int b);
int main(){
     int a,b;
     printf("enter a: ");
     scanf("%d",&a);
     printf("enter b: ");
     scanf("%d",&b);
     sum(a,b);                   // actual parameter don't need a specified type
     return 0;
} void sum(int x, int y){        // formal parameter (anything)
     int sum = x+y;
     printf("sum is: %d\n", sum);
}

#include<math.h>                    // inorder to use (pow) func

void square(int a);
int main(){
     int a;
     printf("enter number: ");
     scanf("%d",&a);                // (a); actual parameter , (x,y): formal paramter
     square(a);
     return 0;
}void square(int x){
     int y= pow(x,2);
     printf("square is: %d", y);
}

// void square(int a);
// void circle(float r);
// void rec(int l, int b);
// int main(){
//      int a,r,l,b;
//      printf("enter side a: ");
//      scanf("%d",&a);
//      printf("enter radius r: ");
//      scanf("%f",&r);
//      printf("enter l: ");
//      scanf("%d",&l);
//      printf("enter b: ");
//      scanf("%d",&b);
//      square(a);
//      circle(r);
//      rec(l,b);
//      return 0;

// } void square(int x){
//      int s= pow(x,2);
//      printf("area of sqaure is: %d \n", s);
// } void circle(float y){
//      float c= 3.14*y*y ;
//      printf("area of circle: %d \n", c);
// }void rec(int a, int b){
//      printf("area of rectangle: %d \n", a*b);
// }