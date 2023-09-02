#include <stdio.h>
#include <math.h>

void main(){
    int n, zeroes = 0;
    printf("Enter a number to find the number of trailing zeroes in its factorial : ");
    scanf("%d\n", &n);
    for(int i = 1; i <= n; i *= 5)
        zeroes = zeroes + (n / i);
    
    printf("Trailing zeroes in %d factorial is %d ", n, zeroes);
}