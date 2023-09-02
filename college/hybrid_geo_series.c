#include<stdio.h>
#include<math.h>
//day 1 q1
//1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187…
int find_term(int n){
    if(n % 2 == 1){
        return pow(2, n / 2);
    }
    return pow(3, (n / 2) - 1);
}
int main(){
    int n;
    printf("Enter the index of the term u want to see : ");
    scanf(" %d", &n);

    printf("The term is : %d", find_term(n));
    return 0;
}