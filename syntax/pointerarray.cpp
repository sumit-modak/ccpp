#include <stdio.h>

int main(){

  int a[5] = {1, 2, 4, 8, 16};

  for(int i = 0; i < 5; i++)
    printf("%d\t%d\n", &a[i], a[i]);

  printf("\n");

  for(int i = 0; i < 5; i++)
    printf("%d\t%d\n", (a + i), *(a + i));

  return 0;
}
