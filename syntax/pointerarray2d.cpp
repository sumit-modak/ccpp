#include <stdio.h>

int main(){

  int a[2][3] = {{1, 2, 4}, {3, 5, 6}};
  int (*p) [3] = a;

  for(int i = 0; i < 2; i++)
    for(int j = 0; j < 3; j++)
      printf("%d\t%d\n", &a[i][j], a[i][j]);

  printf("\n");

  for(int i = 0; i < 2; i++)
    for(int j = 0; j < 3; j++)
      printf("%d\t%d\n", a[i] + j, *(a[i] + j));

  printf("\n");

  for(int i = 0; i < 2; i++)
    for(int j = 0; j < 3; j++)
      printf("%d\t%d\n", *(a + i) + j, *(*(a + i) + j));

  printf("\n");

  printf("%d\n", a[0]);
  printf("%d\t%d\n", a + 0, &a[0]);
  printf("%d\t%d\t%d\n", *a, a[0], &a[0][0]);
  printf("%d\t%d\n", a + 1, &a[1]);
  printf("%d\t%d\n", *a + 1, *(a + 1));
  printf("%d\t%d\t%d\n", *(a + 1), a[1], &a[1][0]);
  printf("%d\t%d\t%d\n", *(a + 1) + 2, a[1] + 2, &a[1][2]);
  printf("%d\t%d\n", *(*a + 1), a[0][1]);

  printf("%d\t%d\n", p[0], p[1]);

  return 0;
}
