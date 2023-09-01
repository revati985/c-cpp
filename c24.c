#include<stdio.h>

// getchar(void), putchar(char), gets(), puts() : [Unformatted input-output func]
// : single character

// int main(){
//     char c;
//     printf("enter any character: ");
//     c= getchar();                    // getchar(): reads/input ,
//     printf("entered char is: ");     // putchar(a): print/ output
//     putchar(c);
//    return 0;
// }


// int main(){
//     int a;
//     while(a!=0){
//         printf("input your entry: ");
//         scanf("%d", &a);
//     }
//     printf("code terminated");
//     return 0;
    
// }


// gets(): reads string[size], puts(): display string  
// printf(): display both strings and variables
// int main(){
//     char ch[100];
//     printf("enter your string: ");
//     gets(ch);
//     printf("entered string is \n");
//     printf(ch);
//     return 0;
// }

// Q. find max no.
// int main(){
//     int num1,num2,num3,max;
//     printf("enter three numbers: ");
//     scanf("%d,%d,%d", &num1,&num2,&num3);
//     if(num1>num2){
//         if(num1>num3){
//             max= num1;
//         }
//         else{max= num3;}
//     }
//     else{
//         if(num2>num3){
//            max= num2;
//         }
//         else{max= num3;}
//     }
//     printf("max number is: %d", max);
//     return 0;
// }

//Q. switch statement use in finding grade of students
// int main(){
//     int a,b,c,d,e,avg;
//     printf("enter subject marks as: maths, english, science, hindi, sst \n");
//     scanf("%d,%d,%d,%d,%d,%d", &a,&b,&c,&d,&e);
//     avg= (a+b+c+d+e)/5;
//     printf("average marks is: %d \n", avg);
//     switch(avg/10)
//     {
//         case 10:
//             printf("perect score");
//             break;
//         case 9:
//             printf("your grade: A");
//             break; 
//         case 8:
//             printf("your grade: B");
//             break; 
//         case 7:
//             printf("your grade: C");
//             break; 
//         case 6:
//             printf("your grade: D");
//             break; 
//         case 5:
//             printf("your grade: E, FAIL");
//             break; 
//         default: ("wrong input");}
           
    
//     return 0;
//     }


