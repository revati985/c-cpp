#include<stdio.h>

//calculating total electricity bill

int main(){
     int unit;
     float bill;
     printf("enter units consumed: ");
     scanf("%d", &unit);
     if(unit<=50){
          bill= unit* 0.5;
          printf("total electricity bill is %f", bill);
     }
     else if(unit<=150){
          bill= 25+ ((unit-50)* 0.75);
          printf("total electricity bill is %f", bill);
     }
     else if(unit<=250){
          bill= 100+ ((unit-100)* 1.2);
          printf("total electricity bill is %f", bill);
     }
     else{
          bill= 220 + ((unit-250)*1.5);
          printf("total electricity bill is %f", bill);
     }
     return 0;
}