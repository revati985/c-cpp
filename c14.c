
// POINTERS (CH=6)---> apna college

#include<stdio.h>

// printing value in pointers: (%d)

int main(){
    int age=22;
    int *ptr= &age;          // (*) ---> value at 
    int _age= *ptr;          // (&) ---> address at 
    printf("%d \n", _age);
    printf("%d \n", *ptr);         // (*ptr) ptr ke address pr value : basically variable
    printf("%d \n", *(&age));

// printing address in pointers: (%p)
    printf("%p \n", age);         //( %p / %u )---> for address // X 
    printf("%p \n", *ptr);                                      // X
    printf("%p \n", _age);                                      // X
    printf("%p \n", ptr);                             // Y
    printf("%p \n", &age);                            // Y
    printf("%p \n", &ptr);                                  //  Z               
    return 0; 
}

int main(){
    int *ptr;                   // (*ptr): variable
    int x;
    ptr=&x;                     // ptr ka address = a address
    *ptr=0;                     // ptr ke address pr value=0
    printf("x: %d\n",x);        //0
    printf("*ptr: %d\n",*ptr);  //0

    *ptr+=5;
    printf("x: %d\n",x);        //5
    printf("*ptr: %d\n",*ptr);  //5

    (*ptr)++;
    printf("x: %d\n",x);        //6
    printf("*ptr: %d\n",*ptr);  //6
    return 0;
}

// POINTER TO POINTER
int main(){
//     float price= 100.00;
//     float *ptr= &price;
//     float **pptr= &ptr;
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d \n", **pptr);
    return 0;
}
