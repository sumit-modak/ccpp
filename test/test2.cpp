#include<stdio.h>

struct x{
    long arst;
    struct x *link;
};
int a = 5;
// reference int& x = a;
// pointer   int* x = &a;
int main(){
    printf(" %d\n", sizeof(struct x));
    printf(" %d\n", sizeof(struct x *));
    printf(" %d\n", sizeof(void *));
    printf(" %d\n", sizeof(long *));
    printf(" %d\n", sizeof(long long int*));
    return 0;
}
