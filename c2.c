#include <stdio.h>

//I
int main()
{   //even-->1
    //odd-->0
     int a;
     printf("enter any number ");
     scanf("%d", &a);
     printf("%d", a % 2 == 0);
     return 0;
}

//II
int main(){
     int a,b,c;
     printf("enter first number ");
     scanf("%d",&a);
     printf("enter second number ");
     scanf("%d",&b);
     printf("enter third number ");
     scanf("%d",&c);
     printf("average is ");
     printf("%d", (a+b+c)/3);
     return 0;
}

//III
int main(){
     int age;
     printf("enter your age ");
     scanf("%d", &age);
     if(age<=10){
          printf("you are a kid");               // if (condition) ---> else if(condition).. ---> else
     }
     else if(age>=10 && age<=15){
          printf("you are a adolecent ");
     }
     else if(age>=15 && age<=18){
          printf("you are a teenager ");
     }
     else{printf("you are an adult ");
     }
     return 0;

//--->  age>=18 ? printf("you are an adult"):printf("you are a kid");   
     //TERNARY OPERATOR
     // condition? printf(if true): printf(else)

} 