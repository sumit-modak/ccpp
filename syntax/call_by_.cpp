#include <stdio.h>
#include <stdlib.h>

int* add(int* a, int* b){
    printf("%d\n", &a);
    printf("%d\n", a);
    int c = (*a) + (*b);
    return &c;
}
int main(){
    int a = 2, b = 4;
    printf("%d\n", &a);
    int *c = add(&a, &b);
    printf("%d", *c);
}