#include<stdio.h>

void greetings();        // func declaration
int main(){
     greetings();        // function call
     return 0;
}
void greetings(){        // func defination
     printf("hello there Revati!");
     
} 


void indian();
void french();

int main(){
     char ch;
     printf("enter you nationality (i- Indian, f- French): ");
     scanf("%c",&ch);
     if(ch == 'i'){
          indian();}
     else if( ch == 'f'){
          french();} 
     else{printf("invalid input");}
     return 0;
} void indian(){
     printf("NAMASTE");
} void french(){
     printf("BONJOUR");
}

// void hi();
// void bye();
// int main(){                // func declaration --> call --> defination
//      hi();
//      bye(); 
//      return 0;
// } void hi(){
//      printf("hello \n");
// } void bye(){
//      printf("bye");
// }