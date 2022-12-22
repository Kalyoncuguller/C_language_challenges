#include <stdio.h>

int main(){
  char *ptr, i;

  ptr = &i;

  printf("Letters:\n");
  
  for (i='A'; i<='Z'; i++) 
  printf("%c ", *ptr);

  return 0;
}

