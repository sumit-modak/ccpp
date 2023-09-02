#include<stdio.h>

int main(){
    long phno;
    printf("Enter your phone number : ");
    scanf(" %d", &phno);

    int sum = 0;
    while(phno > 9){
        while(phno > 0){
            sum += phno % 10;
            phno /= 10;
        }
        phno = sum;
    }

    printf("Your single digit number is : %d", phno);
    return 0;
}