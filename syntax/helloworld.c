#include <stdio.h>

int main(){
  
  int int0;
  float float0;
  double double0;
  char char0;
  char string0[16];
  char string1[16];

  scanf("%d\n", &int0);
  scanf("%f\n", &float0);
  scanf("%lf\n", &double0);
  scanf("%c\n", &char0);
  scanf("%s\n", string0);
  fgets(string1, 16, stdin);

  printf("\n%d", int0);
  printf("\n%f", float0);
  printf("\n%lf", double0);
  printf("\n%c", char0);
  printf("\n%s", string0);

  return 0;
}
