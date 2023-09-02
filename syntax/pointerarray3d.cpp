#include <stdio.h>

int main(){

  int c[3][2][2] = {{{2, 5}, {7, 9}}, {{3, 4}, {6, 1}}, {{0, 8}, {11, 13}}};
  int (*p) [2][2] = c;

  printf("%d\n", c);
  printf("%d\t%d\t%d\n", *c, c[0], &c[0][0]);
  printf("%d\t%d\n", *(c[0][1] + 1), c[0][1][1]);
  printf("%d\t%d\t%d\n", *(c[1] + 1), c[1][1], &c[1][1][0]);

  return 0;
}
