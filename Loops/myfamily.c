#include <stdio.h>
char sibs[3][20] = {"Ben", "Lia", "Lucy"};
int i;
int main(void) { 
  for(i=0;i<3;i++){
    printf("%s Dipp\n", sibs[i]);
  }
  return 0; 
}