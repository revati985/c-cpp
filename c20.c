// STRINGS   [ %s ]
#include<stdio.h>

void printstring(char arr[]);
int main(){
     char firstname[]="Revati";
     char surname[]="Kaushal";
     printstring(firstname);
     printstring(surname);
     return 0;           // '\0' --> null char 
//(combines string into word), comes last in any string
}
void printstring(char arr[]){
     for(int i=0; arr[i]!='\0'; i++){
          printf("%c", arr[i]);
     }
     printf("\n");
}

// // Q ----->

int main(){
     char firstname[50];
     scanf("%s",firstname);      
//fgets(str,n,file): input a multiline string..one line
     printf("firstname is: %s", firstname);
// puts(str): output a string
     return 0;
}

// Q ---->

int countletters(char arr[]);

int main(){
     char name[100];  
     fgets(name,100,stdin);            // input
     printf("length of name is:%d ", countletters(name));
     return 0;
} 
int counletters( char arr[]){
     int count=0;
     for(int i=0; arr[i]!='\0'; i++){      
     // '\0' : null char ---> at the end of any string
         count++;
     }
     return count-1;       // doesn't count null char
}
