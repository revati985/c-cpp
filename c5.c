#include<stdio.h>

int main(){
     char ch;
     printf("enter any character ");
     scanf("%c", &ch);
     if(ch>='A' && ch<='Z'){
          printf("uppercase char ");
     }
     else if(ch>='a' && ch<='z'){
          printf("lowercase char");
     }
     else{ printf("not english alphabet");}
     return 0;
 

for(int i=0; i<11; i=i+1){
     printf("%d \n",i);             // for(initialisation; condition; updation) ---> for loop
     } return 0;

for(char ch='a'; ch<='z'; ch++){
     printf("%c \n",ch);
} return 0;


for(int i=20; i>=0; i=i-1){         // (\n)---> new line       //REVERSE
     printf("%d \n", i);
}
return 0;


int a=1;
printf("%d \n",++a);                // (i++) ---> increment operator, [use then add]
printf("%d",a);                     // (++i) ---> increment operator, [add then use]
return 0;

int a=2;
printf("%d \n", --a);                  // (i--) ---> decrement operator, [use then sub]
printf("%d",a);                        // (--i) ---> decresemt operator, [sub then use]
return 0;

}



