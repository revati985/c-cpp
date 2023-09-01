#include <stdio.h>

// PALINDROME OF A NUMBER (REVERSE= N).... EX. 121

int main(){
  int n,rev=0,rem,pal;
  printf("enter number: ");
  scanf("%d", &n);
  pal=n;
  while(n!=0){
    rem=n%10;
    rev=(rev*10)+ rem;
    n=n/10;
  }
  if(pal==rev){
    printf("it is a palindrome");
  }
  else{
    printf("not a palindrome");
  }
  return 0;
}

