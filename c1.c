#include<stdio.h>

int main(){
     int age;
     printf("enter your age "); //(output)
     scanf("%d", &age);         //(input)
     // %d: stores integer value (..-1,0,1..)
     // %f stores value of real no. (float) 
     // %c stores char value  (star,car..)                    
     //&: stores address (of age)
     printf("age is: %d",age);
     return 0;
}
//Q1
int main(){
     int a,b;
     printf("enter first number ");  // %d: store int value
     scanf("%d", &a);                // &a: store address
     printf("enter second number ");
     scanf("%d", &b);
     int c= a+b;
     printf("sum is: %d ",c);
     return 0;
}
//Q2
int main()
{
     int a;
     printf("enter side of sqaure ");
     scanf("%d", &a);
     int area = a * a; //or pow(a,2)          // pow(x,y) : x raise to power y {not x**y in C}
     printf("area of square is : %d", area);
     return 0;
}
//Q3
int main(){
     int r;
     printf("enter radius of cirle ");
     scanf("%d", &r);
     float area= 3.14*r*r;
     printf("area of circle is: %f", area);
     return 0;
}
// (/): divider, gives quotient{answer}
// (%): modular, gives remainder

//assignment/ shorthand operator
a=a+b // a+=b
a=a-b // a-=b
a=a*b // a*=b
a=a/b // a/=b