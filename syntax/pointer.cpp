#include <stdio.h>

int main() {
  int a = 4;
  int *p = &a;

  printf("%d\n", a);  //value of a
  printf("%p\n", p);  //memory adress of a
  printf("%p\n", &a); //memory adress of a
  printf("%d\n", p);  //memory adress of a in decimal number system
  printf("%p\n", &p); //memory adress of p
  printf("%d\n", &p); //memory adress of p in decimal number system
  printf("%d\n", *p); //dereferencing p
  *p = 8;
  printf("%d\n", a);
  printf("%d\n", p + 1);
  return 0;
}
