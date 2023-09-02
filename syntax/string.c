#include<stdio.h>

int main(){
    char s[7] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};      //   "string"
    char x[5] = "Hello";
    char y[5];

    int i;
    for(i = 0; s[i] != '\0'; i++)
        y[i] = x[i];

    printf(" %s", y);
    return 0;
}