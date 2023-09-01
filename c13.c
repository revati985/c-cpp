#include<stdio.h>

float percentage(float a,float b, float c); //(1)   // func( variable type )---> preferably
int main(){                                         // func( int a,b): wrong
     float a,b,c;                                   // func(int a, int b): right
     printf("enter marks of eng: ");
     scanf("%f",&a);
     printf("enter marks of maths: ");            // (1)func declaration (2)func call (3)func defination
     scanf("%f",&b);
     printf("enter marks of science: ");
     scanf("%f",&c);
     percentage(a,b,c);  //(2)                    // no need to mention type of variable in func call
     return 0;

} float percentage(float a,float b, float c){    //(3)
     float x= (a+b+c)/3;
     printf("percentage is: %f",x );
}