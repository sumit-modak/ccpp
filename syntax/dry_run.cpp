#include <stdio.h>
#include <math.h>

int main(){

  printf("%d\n", 2 + 3);
  printf("%d\n", 2 - 3);
  printf("%d\n", 2 * 3);
  printf("%d\t%d\t%d\t%d\n", 9 / 4, 9 / -4, -9 / 4, -9 / -4);
  printf("%d\t%d\t%d\t%d\n", 16 % 3, 16 % -3, -16 % 3, -16 % -3);

  printf("%x\t%X\t%#x\t%#X\n", 23456, 23456, 23456, 23456);
  printf("|%9f|\n", 2345.6789);
  printf("|%7d|\n", 1234);
  printf("|%-7d|\n", 1234);
  printf("|%06d|\n", 123);

  printf("%d\n", pow(2, 3));
  printf("%d\n", sqrt(9));
  printf("%d\n", ceil(3.22));
  printf("%d\n", floor(3.22));

  printf("\n%d", sizeof(int));
  printf("\n%d", sizeof(float));
  printf("\n%d", sizeof(double));
  printf("\n%d", sizeof(char));

  return 0;
}
