#include <stdio.h>
#include <stdlib.h>

int main(){

  int a;
  int *p;

  p = (int*)malloc(sizeof(int));
  *p = 10;
  free(p);

  p = (int*)malloc(20 * sizeof(int));   //alloocating array in heap memory
}
