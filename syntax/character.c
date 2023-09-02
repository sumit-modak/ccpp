#include<stdio.h>

int main(){
  unsigned char c;
  for(c = 0; c < 256; ++c)
    printf("%c\t %d\n", c, c);

  return 0;
}
