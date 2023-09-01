#include<stdio.h>
#include<string.h>

int main(){
     char name[]="Revati";
     int length= strlen(name);
     printf("lenght is:%d ",length);
     return 0;
}

int main(){
     char firstname[]="Revati";
     char secondname[]="Kaushal";
     strcpy(firstname, secondname);    
     // (strcpy) second value copied to first
     puts(firstname);
}

int main(){
     char fn[100]="Revati ";
     char ln="Kaushal";
     strcat(fn,ln); // (strcat)catenation: joining of two
     puts(fn);
}

int main(){
     char a[]="HHB";
     char b[]="HHA";  // (strcmp): comparission
     printf("%d \n", strcmp(a,b));

}
// +ve---> 1 (a>b)
// -ve---> -1 (a<b)
// 0----> (a=b)