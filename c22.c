#include<stdio.h>
#include<math.h>

//Q: input char and storing in string(str) till enter is pressed.

int main(){
     char str[100];
     char ch;
     int i=0;
     while(ch!='\n'){
          scanf("%c", &ch);
          str[i]=ch;
          i++;
     }
     str[i]='\0';
     puts(str);
}

//Q2.
int main(){
     int s1,s2,s3;
     printf("enter sides: ");
     scanf("%d%d%d", &s1,&s2,&s3);
     if(s1==s2 && s2==s3){
          printf("equilateral triangle");
     }
     else if( s1==s2 || s2==s3 || s3==s1){
          printf("isosceles traingle");
     }
     else{
          printf("scalene traingle");
     }
     return 0;
}

//Q3.
int main(){
     char ch;
     printf("enter anything:%c");
     scanf("%c", &ch);
     if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')){
          printf("alphabet");}
     else if(ch>='0' && ch<='9'){
          printf("digit");
     }
     else{
          printf("special char");
     }
     return 0;
}

//Q4.

int main(){
     int a,b,c,d;
     d= b*b-4*a*c;
     printf("enter a,b,c: ");
     scanf("%d%d%d", &a,&b,&c);
     if(d==0){
          float root1 = -b/(2.0*a);
          printf("roots are real and equal: %f",root1);
     }
     else if(d>0){
          float root1= (-b+ sqrt(d))/(2.0*a);
          float root2= (-b- sqrt(d))/(2.0*a);
          printf("roots are real and unequal: %f,%f", root1, root2);
          
     }
     else{printf("roots are not real");}
     return 0;
